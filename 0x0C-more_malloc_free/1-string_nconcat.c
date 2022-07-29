#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatenate
 *
 * Return: pointer to the created memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0, m = 0;

	if (s1 != NULL)
		while (s1[i])
			i++;
	if (s2 != NULL)
		while (s2[j])
			j++;
	if (j > n)
		j = n;
	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	while (k < i + j && s2 != NULL)
	{
		ptr[k] = s2[m];
		m++;
		k++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
