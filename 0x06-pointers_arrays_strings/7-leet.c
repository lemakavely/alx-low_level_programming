#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * leet - string encoder
 * @a: string input
 * Return: string pointer
 */

char *leet(char *a)
{
	int i, j, len;
	char arr [5] = {'4', '3', '0', '7', '1'};
	char b [5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (a[i] == b[j][0] || a[i] == b[j][1])
			a[i] = arr[j];
		}
	}
	return (a);
}
