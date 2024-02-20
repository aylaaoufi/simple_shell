#include "main.h"
/**
 * main - Entry point for the custom shell program.
 * @ac: The number of command-line arguments.
 * @av: An array of strings representing the command-line arguments.
 *
 * Return: 0 on successful execution,
 *  or an exit status indicating an error.
 */
int main(int ac, char **av)
{
	int ayoub = 0, ll = 0, _exit = 0, line = 0, mm = -1;
	char **x = NULL, *buffer = NULL;
	size_t tol = 0;

	(void) ac;
	if (isatty(STDIN_FILENO) != 0)
		return (interactive_mode(av[0]));
	while (1)
	{
		line = getline(&buffer, &tol, stdin);
		_exit = redirector(&buffer, line, av[0], 0, 1);
		if (_exit == 1)
			continue;
		else if (_exit != -1)
			return (_exit);
		x = allocate_argv_and_set(buffer, &mm);
		_exit = allocat_faild(&x, &buffer, mm);
		if (_exit != 2)
			return (_exit);
		ll = path_faild(&buffer, &x, av[0], 0, 1);
		if (ll != -1)
			return (ll);
		ayoub = new_pro(&x, &buffer, av[0], 0);
		if (ayoub != -1)
			return (ayoub);
		free_grid(x);
	}
	return (0);
}
