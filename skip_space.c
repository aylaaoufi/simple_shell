#include "main.h"
/**
 * skip_space_tab_for_berror - Skips leading spaces
 * and tabs in a string.
 * @buffer: Input string.
 *
 * Return: newly allocated string without leading spaces and tabs,
 *  or NULL if allocation fails.
 */
char *skip_space_tab_for_berror(char *buffer)
{
	int i = 0, count = 0, lm = -1, j, k = 0;
	char *res = NULL;

	for (; buffer[i]; i++) /*"   d          d   "*/
	{
		if (buffer[i] != 32 && buffer[i] != 9)
		{
			if (lm < 0)
				lm = i;
			count++;
		}
		else if (lm > 0 || lm == 0)
			break;
	}
	if (count == 0)
		return (NULL);
	res = malloc(count + 1);
	if (!res)
		return (NULL);
	j = lm;
	while (k < count)
	{
		res[k] = buffer[j];
		j++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
