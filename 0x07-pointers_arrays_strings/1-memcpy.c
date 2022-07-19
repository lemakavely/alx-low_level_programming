#include "main.h"

/**
 * _memcpy - copy memory with constant byte
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of address to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
