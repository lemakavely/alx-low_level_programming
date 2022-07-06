#ifndef PRINT_ALPHABET_C
#define PRINT_ALPHABET_C

#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower
 * 
 * Return: no return
 */

void print_alphabet()
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		_putchar(x);
	}
	_putchar('\n');
}
#endif
