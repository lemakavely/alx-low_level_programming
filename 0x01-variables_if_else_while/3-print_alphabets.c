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

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		x = toupper(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
