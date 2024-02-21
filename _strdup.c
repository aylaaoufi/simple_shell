#include "main.h"
/**
 * _strdup - function that allocates a block of memory and initialize it.
 * @buffer: string will be coppied to the allocated memory.
 * Return: return allocated memory.
 */
char *_strdup(char *buffer)
{
	char *op;
	int x = 0, l;

	if (!buffer)
		return (NULL);
	l = _strlen(buffer);
	op = malloc(l + 1);
	if (!op)
		return (NULL);
	for (; x < l; x++)
		op[x] = buffer[x];
	op[x] = '\0';
	return (op);
}
