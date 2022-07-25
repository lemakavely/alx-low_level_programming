#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - converts string word initials to uppercase
 * @a: string input
 * Return: string pointer
 */

char *cap_string(char *a)
{
	int i = 0, len;

	len = strlen(a);
	for (i = 0; i <= len && a[i]; i++)
	{
		if (a[i] == ' ' || a[i] == '	' || a[i] == ',')
			a[i + 1] = toupper(a[i + 1]);
		if (a[i] == '\n' || a[i] == ';' || a[i] == '.')
			a[i + 1] = toupper(a[i + 1]);
		if (a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '\t')
			a[i + 1]	= toupper(a[i + 1]);
		if (a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
			a[i + 1] = toupper(a[i + 1]);
	}
	return (a);
}
