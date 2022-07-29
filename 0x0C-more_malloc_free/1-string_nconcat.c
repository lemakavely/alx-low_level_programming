#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_size - finds size for malloc
 * @str1: string one input
 * @str2: string two input
 * @m: size of s2 to concat
 *
 * Return: len
 */

int malloc_size(char *str1, char *str2, unsigned int m)
{
	unsigned int len0, len1, len;

	if (str1 == NULL)
		len0 = 0;
	else
		len0 = strlen(str1);
	if (str2 == NULL)
		len1 = 0;
	else
		len1 = strlen(str2);
	if (len1 < m)
		len = len0 + len1 + 1;
	else
		len = len0 + m + 1;
	return (len);
}

/**
 * first_string - fill pointer
 * @st1: first string
 * @st2: second string
 * @ptr1: pointer to concatenated string
 * @o: size of s2 to concat
 * Return: pointer to concatenated string
 */

char *first_string(char *st1, char *st2, char *ptr1, unsigned int o)
{
	unsigned int i = 0, j = 0;

	while (*st1 != '\0')
	{
		ptr1[i] = *st1;
		st1++;
		i++;
	}
	j = i;
	while (*st2 != '\0' && i - j < o)
	{
		ptr1[i] = *st2;
		st2++;
		i++;
	}
	ptr1[i] = '\0';
	return (ptr1);
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
