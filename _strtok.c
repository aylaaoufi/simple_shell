#include "main.h"
/**
 * _strtok - Tokenize a string using specified delimiters.
 * @str: The string to tokenize.
 * @dahawmitr: The delimiters used for tokenization.
 * Return: pointer to the next token or NULL if no more tokens are found.
 */
char *_strtok(char *str, char *dahawmitr)
{
	static char *x;
	char *en, *lp;

	if (str != NULL)
	{
		x = str;
	}
	if (x == NULL)
	{
		return (NULL);
	}
	while (*x != '\0' && _strchr(dahawmitr, *x) != NULL)
	{
		x++;
	}
	en = x;
	lp = x;
	while (*lp != '\0')
	{
		if (_strchr(dahawmitr, *lp) != NULL)
		{
			*lp = '\0';
			x = lp + 1;
			return (en);
		}
		lp++;
	}
	x = NULL;
	return (en);
}
