#include "main.h"
/**
 * path_faild - Handles failure related to the file path.
 * @buffer: Pointer to the input buffer.
 * @s: Double pointer to a string.
 * @av: Command-line arguments.
 * @c: count.
 * @i: for interactive mode should i free or not.
 * Return: 0 if the file path does not exist,
 *  -1 on successful path, 127 on error.
 */
int path_faild(char **buffer, char ***s, char *av, int c, int i)
{
	int pl = 0, pm = 0;
	struct stat st;

	if (c == 0)
		c = 1;
	if (stat(*s[0], &st) == -1)
	{
		*s[0] = real_path(&(*s[0]), &pm);
		if (pm)
		{
			pl = berror(c, *buffer, av), free_grid(*s);
			if (i)
				free(*buffer);
			if (pl)
				return (0);
			else
				return (127);
		}
	}
	return (-1);
}
