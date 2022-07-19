#include "main.h"
#include <string.h>

/**
 * _strpbrk - char occurance check
 * @s: memory area
 * @accept: data to be checked for occurance
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int p;
	unsigned int q;

	p = strlen(s);
	q = strlen(accept);
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			return (s + i);
	}
	return (0);
}
