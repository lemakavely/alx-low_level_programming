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
	int arrayr[13];
	int *arrr = arrayr;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		arrayr[i] = a[12 - i];
		arrr[i] = arrayr[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arrr[i];
	}
}
