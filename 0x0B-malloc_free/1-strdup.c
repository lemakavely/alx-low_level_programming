#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string to new pointer
 * @str: string pointer as a parameter
 *
 * Return: pointer to the array or null
 */

char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
		return (NULL);
	j = strlen(str);
	arr = malloc(j + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j + 1; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
