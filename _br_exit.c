#include "main.h"
/**
 * berror_exit - Handles error messages for the "exit" .
 * @count: Error count.
 * @n: Numeric argument causing the error.
 * @av: Command-line arguments.
 *
 * Return: 1 if memory allocation fails,
 *  2 if exit command error.
 */
int berror_exit(int count, char *n, char *av)
{
	char *x = skip_space_tab_for_berror(n);

	if (!x)
		return (1);
	_puts(av);
	_puts(": ");
	print_int(count);
	_puts(": ");
	_puts("exit");
	_puts(": Illegal number: ");
	_puts(x);
	_puts("\n");
	free(x);
	return (2);
}
