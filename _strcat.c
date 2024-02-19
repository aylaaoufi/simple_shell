#include "main.h"

char *_strcat(char *dest, char *src)
{
        int a = 0;
        int b = 0;

        for (; dest[a] != '\0'; a++)
        {
                continue;
        }

        for (; src[b] != '\0'; b++)
        {
                dest[a] = src[b];
                a++;
        }

        dest[a] = '\0';
        return (dest);
}
