#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the begening of the array
 * @n: number of elements in the array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i = 0, m = 0;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
		n--;
	}
}
