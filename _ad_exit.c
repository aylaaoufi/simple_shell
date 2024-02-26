#include "main.h"
/**
 * advnce_exit - Handles "exit" command with additional arguments.
 * @buffer: Input string containing the "exit" and arguments.
 * @av: Command-line arguments.
 *
 * Return: The exit status specified in the command,
 *  or 2 if there is an error.
 */
int advnce_exit(char *buffer, char *av)
{
	int x = 0; /*exit */
	char *t = NULL;

	t = _strdup(&buffer[5]);
	x = _atoi(t);
	if (x < 0)
	{
		berror_exit(1, t, av);
		free(t);
		return (2);
	}
	free(t);
	return (x);
}
