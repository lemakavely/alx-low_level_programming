#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the array or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k, m;

	if (s1 == NULL && s2 != NULL)
		j = 0;
	else if (s2 == NULL && s1 != NULL)
		k = 0;
	else if (s1 == NULL && s2 == NULL)
	{
		j = 0;
		k = 0;
	}
	else
	{
		j = strlen(s1);
		k = strlen(s2);
	}
	arr = malloc(j + k + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		arr[i] = s1[i];
	}
	for (i = j, m = 0; i < j + k; i++, m++)
	{
		arr[i] = s2[m];
	}
	return (arr);
}
