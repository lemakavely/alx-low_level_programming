#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - print string length
 * @s: string to be computed
 *
 * Return: string length or null
 */

void _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
