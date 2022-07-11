#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to bee coomputed
 *
 * Return: none
 */

void print_rev(char *s)
{
	char *p = s;
	int len;
	int i;

	for (; *p != '\0'; p++)
	{
	}
	len = p - s;
	for (i = len; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	putchar('\n');
}
