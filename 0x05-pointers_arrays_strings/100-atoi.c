#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int _atoi(char *s)
{
	int len, i;
	int j = 0;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			j = j * 10 + s[i] - '0';
			if (s[i-1] == '-')
			{
				j = -j;
			}
		}
		else
			continue;
		if (isalpha(s[i + 2]))
			break;
	}
	return (j);
}
