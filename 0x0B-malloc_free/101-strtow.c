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
	int i = 0, j = 0, p = 0, q = 0, o = 0, l = 0, m = 0, n = 0, k = 0;

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
	printf("word count is: %d\ncharcount without spaces is: %d\ncharcount with spaces considered is: %d\n", n, l, k);
	puts("succesfully found word count and char count");
	ar = (char **)malloc(n);
	if (ar == NULL)
		return (NULL);
	for (o = 0; o < n; o++)
	{
	for (p = 0; p < l; p++)
	{
	{
	if (str[p] == ' ' && str[o + 1] != ' ')
		{
			while (str[o + m] != ' ')
			{
				m++;
			}
		}
	}
		ar[p] = (char *)malloc(m);
	}
	}
	printf("m is: %d\no is: %d\n", m, o);
	puts("scond loop passed and width found");
	printf("%d\n", n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= m; j++)
		{
			if (str[q] == '	')
			{
				ar[i][j] = '\0';
				break;
			}
			else
				ar[i][j] = str[q];
			q++;
		}
	}
	return (ar);
}
