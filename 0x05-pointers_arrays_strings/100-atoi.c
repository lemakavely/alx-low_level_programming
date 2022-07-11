#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * _atoi - change string to integer
 * @s: operand
 * Return: num
 */

int _atoi(char *s)
{
	int len, i, d = 0;
	unsigned int j = 0;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			j = j * 10 + s[i] - '0';
		}
		else
			continue;
		if (isalpha(s[i + 2]))
			break;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			d++;
	}
	if (d % 2)
		j = -j;
	return (j);
}
