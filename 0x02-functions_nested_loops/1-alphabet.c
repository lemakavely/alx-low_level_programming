#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: none to return
 */

void print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		_putchar(x);
	}
	_putchar('\n');
}
