#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case
 *
 * Return: none to return
 */

void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'A'; x <= 'z'; x++)
		{
			x = tolower(x);
			_putchar(x);
		}
	_putchar('\n');
	}
}
