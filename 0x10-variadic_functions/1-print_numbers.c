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
	va_list lemak;

	va_start(lemak, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(lemak, int), separator);
		else
			printf("%d", va_arg(lemak, int));
	}
	va_end(lemak);
	printf("\n");
}
