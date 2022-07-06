#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks weather a char is letter or not
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
