#include "main.h"

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
