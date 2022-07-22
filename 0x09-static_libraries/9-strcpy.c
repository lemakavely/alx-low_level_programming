#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string to a pointer
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return ((char *)dest);
}
