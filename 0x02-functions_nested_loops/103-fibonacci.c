#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long i = 0;
	unsigned long j = 1;
	unsigned long sum = i + j;
	unsigned long new_sum = 0;

	while (sum <= 4000000)
	{
		if (sum % 2 == 0)
		{
			new_sum += sum;
		}
		i = j;
		j = sum;
		sum = i + j;
	}
	printf("%lu", new_sum);
	putchar('\n');
	return (0);
}
