#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converts string to uppercase
 * @a: string input
 * Return: none
 */

char *string_toupper(char *a)
{
	int i = 0;

	for (i = 0; a[i]; i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
