#include <main.h>
void print_int(unsigned int n)
{
	if (n / 10) /*103 10 1  = 103*/
		print_int(n / 10);
	_putchar((n % 10) + 48);
}
