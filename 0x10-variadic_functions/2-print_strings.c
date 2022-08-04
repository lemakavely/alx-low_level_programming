#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print given string arguments
 * @n: number of arguments
 * @separator: separator to the output string
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list lemak;

	va_start(lemak, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(lemak, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lemak);
}
