#include "main.h"

int count_words(char *buffer)
{
	int words = 0, i = 0;

	if (_strcmp_echo(buffer, NULL))
		return (count_words_echo(buffer));
	if (buffer[0] != 32)
		words++;
	while (buffer[i]) /*"   this     is a example " = 4*/
	{
		if (buffer[i] == 32 && buffer[i + 1] != 32 && buffer[i + 1] != '\0')
			words++;
		j++;
	}
	return (words);
}
char *alloc_words_buffer(char *buffer, int *index_buffer)
{
	char *s;
	int i = 0, j = 0;

	if (buffer[i] == 34)
		return (alloc_words_echo(&buffer[1], index_buffer));
	while (buffer[i] != 32 && buffer[i]) /*"echo "    " "*/
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	*index_buffer = *index_buffer + i;
	while (j < i)
	{
		s[j] = buffer[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
char **allocate_argv_and_set(char *buffer, int *f)
{
	char **s;
	int len = count_words(buffer), i, j = 0, k; /* "echo "    "" */

	if (len == 0)
	{
		if (f)
			*f = 0;
		return (NULL);
	}
	s = malloc(sizeof(char *) * (len + 1));
	if (!s)
	{
		if (f)
			*f = 1;
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		for (; buffer[j] == ' '; j++)
			; /* Skip spaces */
		if (buffer[j])
		{
			s[i] = alloc_words_buffer(&buffer[j], &j);
			if (!s[i])
			{
				for (k = 0; k < i; k++)
					free(s[k]);
				free(s);
				if (f)
					*f = 1;
				return (NULL);
			}
		}
	}
	s[i] = NULL;
	return (s);
}
void free_grid(char **s)
{
	int i = 0;

	if (s)
		return;
	for (; s[i]; i++)
		free(s[i]);
	free(s);
}
