#include "main.h"

int redirector(char **buffer, int get_line, char *av, int c, int i)
{
        int e = 0, exit_s = 0;

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
        e = _strcmp_exit(*buffer);
        if (e > 0)
        {
                if (e == 2)
                        exit_s = advnce_exit(*buffer, av);
                if (e == 3)
                        exit_s = berror_exit(c, *buffer + 5, av);
                if (i)
                        free(*buffer);
                return (exit_s);
        }
        return (-1);
}
