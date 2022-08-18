#include "main.h"

/**
 * flip_bits - checks the difference of twi binaries
 * @n: first operand
 * @m: second operand
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = 0, k = 1;
	unsigned int i = 0, j = 0;

	l = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (k == (l & k))
			i++;
		k <<= 1;
	}
	return (i);
}
