#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_size - finds size for malloc
 * @s1: string one input
 * @s2: string two input
 * @n: size of s2 to concat
 *
 * Return: len
 */

int malloc_size(char *s1, char *s2, unsigned int n)
{
	unsigned int len0, len1, len;

	if (s1 == NULL)
		len0 = 0;
	else
		len0 = strlen(s1);
	if (s2 == NULL)
		len1 = 0;
	else
		len1 = strlen(s2);
	if (len1 < n)
		len = len0 + len1 + 1;
	else
		len = len0 + n + 1;
	return (len);
}

/**
 * first_string - fill pointer
 * @s1: first string
 * @s2: second string
 * @ptr: pointer to concatenated string
 * @n: size of s2 to concat
 * Return: pointer to concatenated string
 */

char *first_string(char *s1, char *s2, char *ptr, unsigned int n)
{
	unsigned int i = 0, j = 0;

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
	unsigned int i = 0;

	ptr = malloc(malloc_size(s1, s2, n));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
	ptr = first_string(s1, s2, ptr, n);
	}
	else if (s1 != NULL && s2 == NULL)
	{
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	ptr[i] = '\0';
	}
	else if (s1 == NULL && s2 != NULL)
	{
	while (*s2 != '\0' && i < n)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	}
	else
		ptr[i] = '\0';
	return (ptr);
}
