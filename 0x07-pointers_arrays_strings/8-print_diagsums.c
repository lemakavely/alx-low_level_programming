#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of matrix diagonal
 * @a: matrix input
 * @size: size of the matrix
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	long int sum1 = *(a), sum2 = 0;
	int i = 0, j = 0, p = 0;

	while (a[i + size + 1] && p < size - 1)
	{
		sum1 += a[i + size + 1];
		i += (size + 1);
		p++;
	}
	p = 0;
	while (a[j + size - 1] && p < size)
	{
		sum2 += a[j + size - 1];
		j += (size - 1);
		p++;
	}
	printf("%ld, %ld\n", sum1, sum2);
}
