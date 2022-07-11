#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints string
 * @str: string to bee coomputed
 *
 * Return: none
 */

void puts2(char *str)
{
	char *p = str;
	int i;

	for (i = 0; *p != '\0'; p++, i++)
	{
		if (i % 2)
			continue;
		putchar(*p);
	}
	putchar('\n');
}
