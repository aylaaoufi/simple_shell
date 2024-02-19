#include "main.h"

int count_words(char *buffer)
{
        int ayoub = 0, i = 0;

        if (_strcmp_echo(buffer, NULL))
                return (count_words_echo(buffer));
        if (buffer[0] != 32)
                ayoub++;
        while (buffer[i])
        {
                if (buffer[i] == 32 && buffer[i + 1] != 32 && buffer[i + 1] != '\0')
                        ayoub++;
                i++;
        }
        return (ayoub);
}
