#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate string to a pointer
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return ((char *)dest);
}
