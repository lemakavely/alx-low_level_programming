#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks weather a char is upper case or not
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
