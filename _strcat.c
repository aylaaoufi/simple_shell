#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: Destination
 */
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
