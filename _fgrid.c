#include "main.h"
/**
 * free_grid - Free memory allocated for a 2D array.
 * @s: The 2D array.
 */
void free_grid(char **s)
{
        int m = 0;

        if (!s)
                return;
        for (; s[m]; m++)
                free(s[m]);
        free(s);
}
