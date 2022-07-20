#include "main.h"
#include <string.h>

/**
 * _strstr - char occurance check
 * @haystack: memory area
 * @needle: data to be checked for occurance
 *
 * Return: haystack pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	unsigned int p;
	unsigned int i = 0;
	unsigned int q;

	p = strlen(haystack);
	q = strlen(needle);
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (needle[i] == haystack[j])
			break;
		}
		if (needle[i] == haystack[j])
			return (haystack + j);
	}
	return (0);
}
