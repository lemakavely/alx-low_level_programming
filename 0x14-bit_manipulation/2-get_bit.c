#include "main.h"

/**
 * get_bit - gets the binary result
 * @n: number to compute binary for
 * @index: index of bit to get
 *
 * Return: none
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m, k;

	k = 1 << index;
	m = n & k;
	if (m == k)
		return (1);
	if (index  > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return (0);
}
