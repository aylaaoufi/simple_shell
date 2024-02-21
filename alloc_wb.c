#include "main.h"
/**
 * alloc_words_buffer - Allocate memory for a word in the buffer.
 * @buffer: The input buffer.
 * @index_buffer: Pointer to the index in the buffer.
 * Return: A pointer to the allocated memory.
 */
char *alloc_words_buffer(char *buffer, int *index_buffer)
{
	char *y;
	int a = 0, b = 0;

	if (buffer[a] == 34)
		return (alloc_words_echo(&buffer[1], index_buffer));
	while (buffer[a] != 32 && buffer[a]) /*"echo "    " "*/
		a++;
	y = malloc(a + 1);
	if (!y)
		return (NULL);
	*index_buffer = *index_buffer + a;
	while (b < a)
	{
		y[b] = buffer[b];
		b++;
	}
	y[b] = '\0';
	return (y);
}
