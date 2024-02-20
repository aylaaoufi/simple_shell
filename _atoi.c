#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: Input string.
 *
 * Return: The integer value of the string,
 *  or -1 on error.
 */
int _atoi(char *s)
{
        int x = 0;

        int result = 0;

        int bool = 0;
        int sign = 1;
        int neg = 0;

        while (s[x] != '\0')
        {
                if ((s[x] >= 'A' && s[x] <= 'Z'))
                        return (-1);
                else if ((s[x] >= 'a' && s[x] <= 'z'))
                        return (-1);
                if (bool == 0 && s[x] == '-')
                {
                        neg++;
                }
                if (s[x] >= 48 && s[x] <= 57)
                {
                        result = result * 10 + (int)s[x] - 48;
                        bool = 1;
                }
                if (neg % 2 == 0)
                {
                        sign = 1;
                }
                else
                        sign = -1;
                if (bool == 1 && (s[x] < 48 || s[x] > 57) && s[x + 1] == '\0')
                {
                        return (result * sign);
                }
                x++;
        }
        return ((result == 0) ? -1 : result * sign);
}
