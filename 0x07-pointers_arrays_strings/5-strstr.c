#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - char occurance check
 * @haystack: memory area
 * @needle: data to be checked for occurance
 *
 * Return: haystack pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j = 0, p = 0, q = 0, x = 0, y = 0;

	p = strlen(haystack);
	q = strlen(needle);
	for (j = 0; j < p; j++)
	{
		if (needle[0] == haystack[j])
		{
			for (x = j, y = 0; y < q && x < p; x++, y++)
			{
				if (needle[y] != haystack[x])
					break;
				else
					continue;
			}
			if (y == q)
				break;
		}
	}
	if (y == q)
		return (haystack + j);
	return (0);
}
