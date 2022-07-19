#include "main.h"
#include <string.h>

/**
 * _strspn - count number of chars
 * @s: memory area
 * @accept: data to be counted
 *
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;
	unsigned int p;
	unsigned int q;

	p = strlen(s);
	q = strlen(accept);
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (accept[i] == s[j])
				k++;
			if (s[j] == ',')
				break;
		}
	}
	return (k);
}
