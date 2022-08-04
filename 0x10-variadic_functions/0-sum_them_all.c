#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum the argument given
 * @n: number of arguments
 *
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list lemak;

	va_start(lemak, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(lemak, int);
		}
		va_end(lemak);
		return (sum);
	}
	else
		return (0);
}
