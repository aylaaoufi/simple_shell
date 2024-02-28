#include "main.h"
/**
 * berror - Print an error message for command not found.
 * @count: The line number or count where the error occurred.
 * @buffer: The command or buffer that resulted in the error.
 * @av: The program name or argv[0].
 * Return: 0 on success, 1 on failure.
 */

int berror(int count, char *buffer, char *av)
{
	char *tmp = skip_space_tab_for_berror(buffer);

	if (!tmp)
		return (0);
	_puts(av);
	_puts(": ");
	print_int(count);
	_puts(": ");
	_puts(tmp);
	_puts(": not found\n");
	/*write(0, "\n", 1);*/
	free(tmp);
	return (0);
}
