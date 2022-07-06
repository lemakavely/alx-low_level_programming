#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
