#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x % 10 + '0');
		if (x == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
