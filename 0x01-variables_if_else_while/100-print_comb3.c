#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int i;

	for (x = 0; x <= 9; x++)
	{
		for (i = x + 1; i <= 9; i++)
			{
			putchar(x % 10 + '0');
			putchar(i % 10 + '0');

			if (x == 8)
			{
			continue;

			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
