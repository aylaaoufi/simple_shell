#include "main.h"
/**
 * _strncmp - Compare the first n characters of two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @n: The number of characters to compare.
 * Return: 0 if Success, -1 Failure.
 */
int _strncmp(char *s1, char *s2, int n)
{
        int x = 0;

        for (; x < n; x++)
        {
                if (s1[x] == '\0' || s2[x] == '\0' || s1[x] != s2[x])
                {
                        return (-1);
                }
        }
        return (0);
}
