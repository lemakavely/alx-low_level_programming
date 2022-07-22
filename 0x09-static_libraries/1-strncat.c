#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate string to a pointer
 * @dest: destination pointer
 * @src: source pointer
 * @n: at most bytes
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return ((char *)dest);
}
