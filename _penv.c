#include "main.h"
/**
 * print_env - Print the environment variables to STDOUT.
 */
void print_env(void)
{
	size_t len;
	int p = 0;

	for (; environ[p] != NULL; p++)
	{
		len = _strlen(environ[p]);
		write(STDOUT_FILENO, environ[p], len);
		write(STDOUT_FILENO, "\n", 1);
	}
}
