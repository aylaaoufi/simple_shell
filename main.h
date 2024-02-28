#ifndef _SHELL_
#define _SHELL_

#ifndef _SHELL_
#define _SHELL_
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
void free_grid(char **s);
char **allocate_argv_and_set(char *buffer, int *f);
int allocat_faild(char ***s, char **buffer, int is_f);
void print_int(unsigned int n);
int new_pro(char ***s, char **buffer, char *av, int c);
int interactive_mode(char *av);
int path_faild(char **buffer, char ***s, char *av, int c, int i);
char *_strcat(char *dest, char *src);
void _putchar(char c);
int count_words_echo(char *buffer);
int count_words(char *buffer);
char *_getenvi();
void print_env(void);
char *real_path(char **buffer, int *faild);
int redirector(char **buffer, int get_line, char *av, int c, int i);
char *alloc_words_buffer(char *buffer, int *index_buffer);
char *alloc_words_echo(char *buffer, int *index_buffer);
char *_strtok(char *str, char *dahawmitr);
char *_strdup(char *buffer);
char *cut_the_first_word(char *buffer);
int _strcmp_exit(char *dest);
int _atoi(char *s);
char *skip_space_tab_for_berror(char *buffer);
int berror_exit(int count, char *n, char *av);
int _strlen(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *src, char *dest);
char *_strcpy(char *dest, char *src);
int berror(int count, char *buffer, char *av);
int _strcmp_echo(char *dest, char *src);
void _puts(char *str);
int advnce_exit(char *buffer, char *av);
#endif
