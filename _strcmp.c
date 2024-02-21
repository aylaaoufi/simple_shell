#include "main.h"
/**
 * _strcmp - compare two strings
 * @src: first string
 * @dest: second string
 * Return: comparaison result
 */
int _strcmp(char *src, char *dest)
{
	int w = 0;

	if (!src || !dest)
		return (0);
	for (; src[w] && dest[w]; w++)
	{
		if (src[w] != dest[w])
			return (0);
	}
	return ((src[w] == dest[w]) ? 1 : 0);
}
