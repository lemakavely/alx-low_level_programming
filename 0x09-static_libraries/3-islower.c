#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks weather a char is lower case or not
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
