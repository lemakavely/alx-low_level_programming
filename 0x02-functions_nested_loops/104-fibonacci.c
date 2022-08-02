#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int k;
	unsigned long i = 0;
	unsigned long j = 1, a, b, c, d, e, f, l;
	unsigned long sum = i + j;

	for (k = 3; k < 91; ++k)
	{
		printf("%lu, ", sum);
		i = j;
		j = sum;
		sum = i + j;
	}
	a = j / 1000000000;
	b = j % 1000000000;
	c = sum / 1000000000;
	d = sum % 1000000000;
	for (l = 91; l < 100; l++)
	{
		printf("%lu%lu, ", c, d);
		e = a;
		f = b;
		a = c;
		b = d;
		c = e + a + ((f + b) / 1000000000);
		d = (f + b) % 1000000000;
	}
	printf("%lu%lu\n", c, d);
	return (0);
}
