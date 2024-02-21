#include "main.h"
/**
 * _strcmp_echo - Compare a string with the "echo" command.
 * @dest: The string to compare with the "echo" command.
 * @src: The string.
 * Return: 1 if @dest is equal to "echo", 0 otherwise.
 */
int _strcmp_echo(char *dest, char *src)
{
	int a = 0, b = 0;

	if (!src) /*"env env, exittt"*/
		src = "echo";
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
			else
				return (0);
		}
	}
	return (1);
}
