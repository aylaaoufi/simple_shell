#include "main.h"
/**
 * real_path - Resolve the real path of a command in the system.
 * @buffer: The command to resolve.
 * @faild: A pointer to an integer indicating failure (1) or success (0).
 * Return: A dynamically allocated string with the resolved path, or the
 *         original buffer if the command is not found.
 */
char *real_path(char **buffer, int *faild)
{
    char *token, *env_path, *brutforce;
    int path_found = 0, length;

    if (!buffer || !(*buffer))
        return (NULL);
    env_path = _getenvi();
    if (!env_path)
    {
        if (faild)
            *faild = 1;
        return (*buffer);
    }
    token = _strtok(env_path, ":");
    length = _strlen(*buffer);
    while (token)
    {
        brutforce = malloc(length + 2 + _strlen(token));
        if (!brutforce)
        {
            free(env_path);
            if (faild)
                *faild = 1;
            exit(EXIT_FAILURE);
        }
        _strcpy(brutforce, token);
        _strcat(brutforce, "/");
        _strcat(brutforce, *buffer);
        if (access(brutforce, X_OK) == 0)
            path_found = 1;
        if (path_found)
        {
            free(*buffer);
            free(env_path);
            return (brutforce);
        }
        free(brutforce);
        token = _strtok(NULL, ":");
    }
    free(env_path);
    return (path_found ? (free(*buffer), brutforce) : ((*faild = 1), *buffer));
}
