#include <stdio.h>
#include "_putchar.c"


/**
 * print - print multiple digits
 * @n: to be printed
 *
 * Return: none
 */

void print(int n)
{
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * main - the fizz buzz code
 *
 * Return: none
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (!(i % 3) && i % 5)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (!(i % 5) && i % 3)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i / 10)
			print(i);
			else
				_putchar(i + '0');
		}
		if (i != 100)
		_putchar(' ');
	}
	return (0);
}
