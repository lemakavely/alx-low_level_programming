#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given
 * @n: number of arguments
 * @separator: separator between the numbers
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list lemak;

	va_start(lemak, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(lemak, int);
		if (i < n - 1)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(lemak);
}
