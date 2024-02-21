#include "main.h"
/**
 * count_words - Count the number of words in a string.
 * @buffer: The input string.
 * Return: The number of words in the string.
 */
int count_words(char *buffer)
{
        int ayoub = 0, x = 0;

        if (_strcmp_echo(buffer, NULL))
                return (count_words_echo(buffer));
        if (buffer[0] != 32)
                ayoub++;
        while (buffer[x]) /*"   this     is a example " = 4*/
        {
                if (buffer[x] == 32 && buffer[x + 1] != 32 && buffer[x + 1] != '\0')
                        ayoub++;
                x++;
        }
        return (ayoub);
}
