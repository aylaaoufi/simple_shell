#include "main.h"
/**
 * _getenvi - Get the value of an environment variable.
 * Return: with the value of the environment variable
 *         or NULL if the variable is not found or has an empty value.
 */

char *_getenvi()
{
	char *t, *k, *env, *s, *v;
	int x = 0;

	v = "PATH";
	while (environ[x] != NULL)
	{
		t = _strdup(environ[x]);
		k = _strtok(t, "=");

		if (_strcmp(k, v))
		{
			env = _strtok(NULL, "\n");
			s = _strdup(env);
			if (s[0] == '\0')
			{
				free(t);
				free(s);
				return (NULL);
			}
			free(t);
			return (s);
		}
		free(t);
		x++;
	}
	return (NULL);
}
