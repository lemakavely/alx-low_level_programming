#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

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
	va_list lemak;
	char *s;
	
	va_start(lemak, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(lemak, char *);
		if (s && i != n - 1)
			printf("%s%s ", s, separator);
		else if (s && i == n - 1)
			printf("%s", s);
		if (s == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(lemak);
}
