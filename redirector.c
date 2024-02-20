#include "main.h"
/**
 * redirector - Redirects input based on the provided buffer content.
 * @buffer: Double pointer to the input buffer.
 * @get_line: Flag indicating if a new line is obtained.
 * @av: Command-line arguments.
 * @c: count.
 * @i: for interactive mode should i free or not.
 * Return: 0 if get_line is -1, 1 if buffer contains only '\n',
 * -1 on error.
 */
int redirector(char **buffer, int get_line, char *av, int c, int i)
{
        int x = 0, _exit = 0;

        if (c == 0)
                c = 1;
        if (get_line == -1)
        {
                free(*buffer), write(0, "\n", 1);
                return (0);
        }
        if (*buffer[0] == '\n')
                return (1);
        if (buffer[0][_strlen(*buffer) - 1] == '\n')
                buffer[0][_strlen(*buffer) - 1] = '\0';
        if (_strcmp_echo(*buffer, "env"))
        {
                print_env();
                return (1);
        }
        x = _strcmp_exit(*buffer);
        if (x > 0)
        {
                if (x == 2)
                        _exit = advnce_exit(*buffer, av);
                if (x == 3)
                        _exit = berror_exit(c, *buffer + 5, av);
                if (i)
                        free(*buffer);
                return (_exit);
        }
        return (-1);
}
