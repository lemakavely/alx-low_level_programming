#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the binary result to 1
 * @n: number to compute binary for
 * @index: index of bit to get
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 0;
	int i = 0, k = 0;
	unsigned long int val[32];

	j = *n;
	while (j)
	{
		val[i] = j % 2;
		j /= 2;
		i++;
	}
	val[index] = 1;
	for (k = i; k >= i; k--)
	{
		if (val[k] == 1)
		{

	printf("i is: %d\n", i);
	if (index >= i)
		return (-1);
	return (1);
}
