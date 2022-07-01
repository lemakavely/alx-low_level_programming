#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
	}

	for (x = 'A'; x <= 'f'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
