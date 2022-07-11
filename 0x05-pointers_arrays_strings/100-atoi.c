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
	int len, i, num, c = 0;
	int j = 0;

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
	num = j;
	do {
		j /= 10;
		++c;
	} while (j != 0);
	if (i - c != 0 && s[i - 1 - c] == '-')
		num = -num;
	return (num);
}
