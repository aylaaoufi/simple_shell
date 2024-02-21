#include "main.h"
/**
 * alloc_words_echo - Allocate memory for a word in an "echo".
 * @buffer: The input buffer containing the "echo".
 * @index_buffer: Pointer to the index in the buffer.
 * Return: A poi nter to the allocated memory for a word in the "echo".
 */
char *alloc_words_echo(char *buffer, int *index_buffer)
{
	char *x;
	int a = 1, b = 0;

	while (buffer[a] != 34 && buffer[a]) /*"echo "    " "*/
		a++;
	x = malloc(a + 1);
	if (!x)
		return (NULL);
	*index_buffer = *index_buffer + a;
	while (b < a)
	{
		x[b] = buffer[b];
		b++;
	}
	x[b] = '\0';
	return (x);
}
