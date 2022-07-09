#include <stdio.h>

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
			printf("%s" , "FizzBuzz");
		}
		else if (!(i % 3) && i % 5)
		{
			printf("%s" , "Fizz");
		}
		else if (!(i % 5) && i % 3)
		{
			printf("%s" , "Buzz");
		}
	
		else
		{
			printf("%d" , i);
		}
		putchar(' ');
	}
}
