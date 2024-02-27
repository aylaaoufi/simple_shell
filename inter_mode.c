#include "main.h"
/**
 * interactive_mode - A basic interactive shell.
 * @av: Command-line arguments.
 * Return: 0 or exit failure.
 */
int interactive_mode(char *av)
{
	char *input_buffer = NULL, **tokens = NULL;
	size_t buffer_size = 0;
	int getline_result, exit_status = 0, command_count = 0, is_redirect, exit_code = 0, is_failure = 0;

	while (1)
	{
		write(STDOUT_FILENO, "#user$ ", 7), is_redirect = 0;
		getline_result = getline(&input_buffer, &buffer_size, stdin);
		command_count++;
		exit_code = redirector(&input_buffer, getline_result, av, command_count, 0);
		if (exit_code == 1 || exit_code == 2)
			continue;
		else if (exit_code != -1)
			return (exit_code);
		tokens = allocate_argv_and_set(input_buffer, &is_failure);
		exit_code = allocat_faild(&tokens, &input_buffer, is_failure);
		if (exit_code != 2)
			return (exit_code);
		is_redirect = path_faild(&input_buffer, &tokens, av, command_count, 0);
		if (is_redirect != -1)
			continue;
		exit_status = new_pro(&tokens, &input_buffer, av, command_count);
		if (exit_status != -1)
			continue;
		free_grid(tokens);
	}
	return (exit_status);
}
