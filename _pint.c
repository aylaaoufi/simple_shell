#include "main.h"
/**
 * print_int - Print an unsigned integer.
 * @n: The unsigned integer to print.
 */
void print_int(unsigned int n)
{
	if (n / 10) /*103 10 1  = 103*/
		print_int(n / 10);
	_putchar((n % 10) + 48);
}
