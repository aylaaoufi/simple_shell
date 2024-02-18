#include "main.h"

void print_int(unsigned int n)
{
	if (n / 10)
		print_int(n / 10);
	_putchar((n % 10) + 48);
}

void _putchar(char c)
{
	write(2, &c, 1);
}

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

int berror(int count, char *buffer, char *av)
{
	char *tmp = skip_space_tab_for_berror(buffer);

	if (!tmp)
		return (1);
	_puts(av);
	_puts(": ");
	print_int(count);
	_puts(": ");
	_puts(tmp);
	_puts(": not found\n");
	free(tmp);
	return (0);
}
