#include "main.h"
#include <string.h>

/**
 * _strchr - look for a char in a string
 * @s: memory area
 * @c: char to find
 *
 * Return: p
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int j;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
