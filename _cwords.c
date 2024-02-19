#include "main.h"

int count_words(char *buffer)
{
        int words = 0, i = 0;

        if (_strcmp_echo(buffer, NULL))
                return (count_words_echo(buffer));
        if (buffer[0] != 32)
                words++;
        while (buffer[i])
        {
                if (buffer[i] == 32 && buffer[i + 1] != 32 && buffer[i + 1] != '\0')
                        words++;
                i++;
        }
        return (words);
}
