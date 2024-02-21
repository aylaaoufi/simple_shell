#include "main.h"

/**
 * new_pro - Creates a new process to execute a command.
 * @s: Double pointer to the command and its arguments.
 * @buffer: Pointer to the input buffer.
 * @av: Command-line arguments.
 * @c: Count.
 * Return: 0 on successful execution,
 *  127 on command not found,
 *  or exit status on error.
 */
int new_pro(char ***s, char **buffer, char *av, int c)
{
        pid_t child_process_id = 0;
        int status = 0, exit_status = 0, is = 0;

        if (c == 0)
                c = 1;
        child_process_id = fork();
        if (child_process_id)
                wait(&exit_status);
        else
        {
                if (access(*s[0], X_OK) == 0)
                        execve(*s[0], *s, environ);
                else
                {
                        is = berror(c, *buffer, av);
                        if (is)
                                return (0);
                        else
                                return (127);
                }
        }
        if (WIFEXITED(exit_status))
                status = WEXITSTATUS(exit_status);
        if (status != 0)
        {
                free_grid(*s), free(*buffer);
                return (status);
        }
        return (-1);
}
