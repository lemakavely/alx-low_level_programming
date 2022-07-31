#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - count words in a string
 * @s: pointer to the string
 *
 * Return: number of words
 */

int wrdcnt(char *s)
{
	int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 && s[0] != ' ')
			j++;
		if (s[i] == ' ' && s[i + 1] != ' ')
			j++;
	}
	return (j);
}

/**
 * charcnt - cout characters in a string
 * @s1: string input pointer
 * @i: the ith word to compute
 *
 * Return: number of chars
 */

int charcnt(char *s1, int i)
{
	int j = 0, k = 0, w = 0;

	for (j = 0; s1[j]; j++)
	{
		if (j == 0 && s1[0] != ' ')
			k++;
		if (s1[j] == ' ' && s1[j + 1] != ' ')
			k++;
		if (k == i + 1 && s1[j] != ' ')
			w++;
	}
	return (w);
}

/**
 * strtow - returns pointer to string of words
 * @str: string to convert
 *
 * Return: pointer to an array of strings or null
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, x = 0, z = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (z = 0; str[z]; z++)
	{
		if (str[z] == ' ')
			x = 0;
		else
		{
			x = 1;
			break;
		}
	}
	if (x == 0)
		return (NULL);
	m = wrdcnt(str);
	arr = malloc(sizeof(char *) * (m + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < m; i++)
	{
		arr[i] = (char *)malloc(sizeof(char) * (charcnt(str, i)) + 1);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (j = 0; j < m; j++)
	{
		for (l = o; str[l] == ' '; l++)
			;
		n = charcnt(str, j);
		for (k = 0, o = l; k < n && str[o] != ' '; k++, o++)
			arr[j][k] = str[o];
		if (j == m - 1)
			break;
		arr[j][k] = '\0';
	}
	return (arr);
}