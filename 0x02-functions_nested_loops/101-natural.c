#include <stdio.h>

/**
 * print - prints long int
 * @n: operand
 * Return: none
 */

void print(int n)
{
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	print(sum);
	putchar('\n');
	return (0);
}
