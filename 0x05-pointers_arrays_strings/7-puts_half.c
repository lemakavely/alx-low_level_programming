#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints string
 * @str: string to bee coomputed
 *
 * Return: none
 */

void puts_half(char *str)
{
	char *p = str;
	int i, len;

	len = strlen(str);
	p = p + len / 2;
	for (i = len / 2; i < len; p++, i++)
	{
		putchar(*p);
	}
	putchar('\n');
}
