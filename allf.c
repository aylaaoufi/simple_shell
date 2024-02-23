#include "main.h"
/**
 * allocat_faild - Handles memory allocation failure.
 * @s: Double pointer to a string.
 * @buffer: Pointer to the input buffer.
 * @is_f: Integer flag indicating the type of failure.
 * Return: -1 on allocation failure, 0 on normal failure,
 *  2 on successful allocation.
 */
int allocat_faild(char ***s, char **buffer, int is_f)
{

	if (!(*s))
	{
		if (is_f)
		{
			free(*buffer);
			return (-1);
		}
		if (is_f == 0)
		{
			free(*buffer); /*ne contineu here be careful*/
			return (0);
		}
	}
	return (2);
}
