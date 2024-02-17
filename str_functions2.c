#include "main.h"

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

int _strcmp(char *src, char *dest)
{
	int i = 0;

	if (!src || !dest)
		return (0);
	for (; src[i] && dest[i]; i++)
	{
		if (src[i] != dest[i])
			return (0);
	}
	return ((src[i] == dest[i]) ? 1 : 0);
}

int _strcmp_echo(char *dest, char *src)
{
	int i = 0, j = 0;

	if (!src) /*"env env, exittt"*/
		src = "echo";
	for (; src[i]; i++)
	{
		if (src[i] != dest[i])
			return (0);
	}
	if (dest[i] != '\0')
	{
		j = i;
		while (dest[j])
		{
			if (src[i] == '\0' && (dest[j] == 32 || dest[j] == 9))
				j++;
			else
				return (0);
		}
	}
	return (1);
}

char *_strdup(char *buffer)
{
	char *new;
	int i = 0, len;

	if (!buffer)
		return (NULL);
	len = _strlen(buffer);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	for (; i < len; i++)
		new[i] = buffer[i];
	new[i] = '\0';
	return (new);
}

char *_strtok(char *str, char *kim)
{
	static char *buffer;
	char *token, *ayoub;

	if (str != NULL)
	{
		buffer = str;
	}
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (*buffer != '\0' && _strchr(kim, *buffer) != NULL)
	{
		buffer++;
	}
	token = buffer;
	ayoub = buffer;
	while (*ayoub != '\0')
	{
		if (_strchr(kim, *ayoub) != NULL)
		{
			*ayoub = '\0';
			buffer = ayoub + 1;
			return (token);
		}
		ayoub++;
	}
	buffer = NULL;
	return (token);
}
