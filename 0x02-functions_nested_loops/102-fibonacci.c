#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int k;
	int i = 0;
	int j = 1;
	long int sum = i + j;

	for (k = 3; k <= 52; ++k)
	{
		printf("%ld\n", sum);
		i = j;
		j = sum;
		sum = i + j;
	}
	return (0);
}


