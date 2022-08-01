#include "main.h"

/**
 * print_number - print the output number
 * @ptr: pointer to the number array
 *
 * Return: none
 */

void print_number(double num)
{
}

int size_of_pointer(int *num)
{
	int i = 0;

	for (i = 0; num[i]; i++);
	return (i);
}

int *mul(int *num1, int *num2)
{
	int i = 0, j = 0, k = 0, size1, size2, size;

	size1 = size_of_pointer(num1);
	size2 = size_of_pointer(num2);

}
