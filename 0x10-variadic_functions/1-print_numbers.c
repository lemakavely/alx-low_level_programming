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
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lemak);
}
