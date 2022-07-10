#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int k;
	unsigned long i = 0;
	unsigned long j = 1;
	unsigned long sum = i + j;

	for (k = 3; k <= 52; ++k)
	{
		if (k == 52)
			printf("%lu", sum);
		else
		{
		printf("%lu, ", sum);
		i = j;
		j = sum;
		sum = i + j;
		}
	}
	putchar('\n');
	return (0);
}


