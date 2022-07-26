#include "main.h"
#include <stdlib.h>

/**
 * argstostr - returns pointer to string of entered argument
 * @ac: number of arguments entered
 * @av: pointer to an array of entered arguments
 *
 * Return: pointer to an array of strings or null
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i = 0, j = 0, k = 0, m = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 1; av[i]; i++)
	{
		while (av[i][j])
		{
			j++;
		}
		k += j;
		k++;
		j = 0;
	}
	i = 0;
	arr = malloc(k);
	if (arr == NULL)
		return (NULL);
	for (i = 1; av[i]; i++)
	{
		while (av[i][j])
		{
			arr[m] = av[i][j];
			j++;
			m++;
		}
		arr[m] = '\n';
		m++;
		j = 0;
	}
	return (arr);
}
