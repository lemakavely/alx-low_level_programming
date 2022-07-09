#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (k = 1; k <= size; k++)
	{
	for (j = size - k; j > 0; j--)
	{
		_putchar(' ');
	}
	for (i = 0; i < k; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
