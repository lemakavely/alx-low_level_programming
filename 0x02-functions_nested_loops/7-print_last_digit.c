#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of a number
 * @n: number to be computed
 *
 * Return: n
 */

int print_last_digit(int n)
{
	_putchar(abs(n % 10) + '0');
	return (abs(n  % 10));

}
