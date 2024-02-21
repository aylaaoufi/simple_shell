#include "main.h"
/**
 * count_words_echo - Count the number of words in "echo".
 * @buffer: The input string containing the "echo" command.
 * Return: The number of words in the "echo" command string.
 */
int count_words_echo(char *buffer)
{
	int q = 0, wds = 0;

	if (buffer[0] != 32)
		wds++;
	while (buffer[q]) /*"echo "   " "*/
	{
		if (buffer[q] == 34)
		{
			q++;
			while (buffer[q] != 34)
				q++;
		}
		if (buffer[q] == 32 && buffer[q + 1] != 32 && buffer[q + 1])
			wds++;
		q++;
	}
	return (wds);
}
