#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenate string to a pointer
 * @dest: destination pointer
 * @src: source pointer
 * @n: at most bytes
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return ((char *)dest);
}
