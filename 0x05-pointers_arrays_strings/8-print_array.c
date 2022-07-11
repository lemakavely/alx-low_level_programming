#include <stdio.h>
#include "main.h"

/**
 * print_array - print out array
 * @a: array pointer
 * @n: array size to print
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++, a++)
	{
		if (i == n - 1)
			printf("%d", *a);
		else
			printf("%d, ", *a);
	}
	putchar('\n');
}
