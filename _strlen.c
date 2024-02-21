#include "main.h"
/**
 * _strlen - count length of string
 * @str: pointer to char
 * Return: return the length
 */
int _strlen(char *str)
{
	int a = 0;

	while (str[a])
		a++;
	return (a);
}
