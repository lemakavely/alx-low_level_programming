#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - returns pointer to string of words
 * @str: string to convert
 *
 * Return: pointer to an array of strings or null
 */

char **strtow(char *str)
{
	char **ar;
	int j = 0, o = 0, u = 0, v = 0, p = 0, q = 0, l = 0, m = 0, n = 0, k = 0;

	if (str == 0 || strcmp(str, "") == 0)
		return (NULL);
	while (str[k])
	{
		if (str[k] == ' ' && str[k + 1] == ' ')
		{	
			k++;
			continue;
		}
		else if (str[k] == ' ' && str[k + 1] != ' ' && l != 0)
		{
			n++;
			k++;
			l++;
		}
		else
		{
			l++;
			k++;
		}
	}
	ar = (char **)malloc(n);
	if (ar == NULL)
		return (NULL);
	for (p = 0; p < n; p++)
	{
		while (str[o] == ' ')
			o++;
		v = o;
		for (m = v; str[m] != ' '; m++);
		printf("charcount per line of %dth line: %d\n", p, m - v);
		ar[p] = (char *)malloc(sizeof(char) * (m - v + 2));
		if (ar[p] == NULL)
		{
			for (u = 0; u < p; u++)
				free(ar[u]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < (m - v); j++)
		{
			printf("%c %dth line %dth element %d chars %dth element in line\n", str[q], p, q, m - v, j);
			ar[p][j] = str[q];
			q++;
		}
		o = o + m - v;
		m = 0;
	}
	return (ar);
}
