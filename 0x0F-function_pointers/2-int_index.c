#include "function_pointers.h"

/**
 * int_index - searchs for an int
 * @array: array input
 * @size: array size
 * @cmp: function pointer that compare values
 *
 * Return: index of element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j = 0;

	if (size <= 0)
		return (-1);
	else if (array != NULL && cmp != NULL)
	{
		for (j = 0; j < size; j++)
		{
			i = cmp(*(array + j));
			if (i != 0)
				break;
		}
	}
	if (j != size)
		return (j);
	else
		return (-1);
}
