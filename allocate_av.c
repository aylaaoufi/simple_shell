#include "main.h"
/**
 * allocate_argv_and_set - Allocate memory for an array of words.
 * @buffer: The input buffer containing words.
 * @f: Pointer to an integer indicating failure (1) or success (0).
 * Return: A dynamically allocated array of words or NULL on failure.
 */
char **allocate_argv_and_set(char *buffer, int *f)
{
	char **v;
	int tol = count_words(buffer), i, j = 0, l; /* "echo "    "" */

	if (tol == 0)
	{
		if (f)
			*f = 0;
		return (NULL);
	}
	v = malloc(sizeof(char *) * (tol + 1));
	if (!v)
	{
		if (f)
			*f = 1;
		return (NULL);
	}
	for (i = 0; i < tol; i++)
	{
		for (; buffer[j] == ' '; j++)
			; /* Skip spaces */
		if (buffer[j])
		{
			v[i] = alloc_words_buffer(&buffer[j], &j);
			if (!v[i])
			{
				for (l = 0; l < i; l++)
					free(v[l]);
				free(v);
				if (f)
					*f = 1;
				return (NULL);
			}
		}
	}
	v[i] = NULL;
	return (v);
}
