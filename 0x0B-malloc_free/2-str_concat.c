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
	int i, j = 0, k = 0, m;

	if (s1 != NULL && s2 != NULL)
	{
		j = strlen(s1);
		k = strlen(s2);
	}
	else if (s1 == NULL && s2 != NULL)
		k = strlen(s2);
	else if (s2 == NULL && s1 != NULL)
		j = strlen(s1);
	else
	{
		k = 0;
		j = 0;
	}
	arr = malloc(j + k + 1);
	if (arr == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		for (i = 0; i < k; i++)
			arr[i] = s2[i];
	}
	else if (s2 == NULL && s1 != NULL)
	{
		for (i = 0; i < j; i++)
			arr[i] = s1[i];
	}
	else if (s1 == NULL && s2 == NULL)
		*arr = '\0';
	else
	{
		for (i = 0; i < j; i++)
			arr[i] = s1[i];
		for (i = j, m = 0; i < j + k; i++, m++)
			arr[i] = s2[m];
	}
	return (arr);
}
