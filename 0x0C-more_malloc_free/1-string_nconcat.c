#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int i = 0, j = 0, len0, len1, len;

	len0 = strlen(s1);
	len1 = strlen(s2);
	if (len1 < n)
		len = len0 + len1 + 1;
	else
		len = len0 + n + 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	j = i;
	while (*s2 != '\0' && i - j < n)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
