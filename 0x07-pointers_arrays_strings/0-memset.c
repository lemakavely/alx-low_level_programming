#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: data to be filled
 * @n: number of address to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
