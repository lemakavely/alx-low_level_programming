#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * rot13 - string encoder
 * @c: string input
 * Return: string pointer
 */

char *rot13(char *c)
{
	int i, j, len;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
	}
	return (c);
}
