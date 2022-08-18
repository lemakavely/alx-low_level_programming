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
	unsigned int i = 0;
	int val[32];

	while (n)
	{
		val[i] = n % 2;
		n /= 2;
		i++;
	}
	if (index >= i)
		return (-1);
	return (val[index]);
}
