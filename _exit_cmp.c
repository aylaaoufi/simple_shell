#include "main.h"
/**
 * _strcmp_exit - Compares a string with the "exit" command.
 * @dest: Input string to be compared with "exit".
 *
 * Return: 0 if not equal, 1 if equal,
 *  2 if "exit" with numeric argument,
 *  3 if "exit" with alphabetic argument.
 */
int _strcmp_exit(char *dest)
{
	int a = 0, b = 0;
	char *src;

	src = "exit";
	for (; src[a]; a++)
	{
		if (src[a] != dest[a])
			return (0);
	}
	if (dest[a] != '\0')
	{
		b = a;
		while (dest[b])
		{
			if (src[a] == '\0' && (dest[b] == 32 || dest[b] == 9))
				b++;
			else if (src[a] == '\0' && ((dest[b] >= 48 && dest[b] <= 57 &&
					dest[b - 1] == 32) || dest[b] == '-'))
				return (2);
			else if (src[a] == '\0' && ((dest[b] >= 'A' &&
					dest[b] <= 'Z' && dest[b - 1] == 32)))
				return (3);
			else if (src[a] == '\0' && ((dest[b] >= 'a' &&
					dest[b] <= 'z' && dest[b - 1] == 32)))
				return (3);
			else
				return (0);
		}
	}
	return (1);
}
