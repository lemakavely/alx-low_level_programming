#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{	int x;
	int i;
	int j;
	int k;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = x; j <= 9; j++)
			{
				if (j != x)
					k = 0;
				else
					k = i + 1;
				for (; k <= 9; k++)
				{
					putchar(x % 10 + '0');
					putchar(i % 10 + '0');
					putchar(' ');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');

					if (x == 9 && i == 8)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
