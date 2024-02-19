#include "main.h"

void free_grid(char **s)
{
        int i = 0;

        if (!s)
                return;
        for (; s[i]; i++)
                free(s[i]);
        free(s);
}
