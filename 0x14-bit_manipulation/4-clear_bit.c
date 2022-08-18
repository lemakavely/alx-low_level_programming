#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the binary result to 0
 * @n: number to compute binary for
 * @index: index of bit to get
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index  > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = ~(1 << index);
	*n = *n & k;
	return (1);
}
