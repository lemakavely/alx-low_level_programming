#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterate on array elements
 * @array: array to iterate
 * @size: size of the array
 * @action: function pointer
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
