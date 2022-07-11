#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string
 * @str: string to bee coomputed
 *
 * Return: none
 */

void _puts(char *str)
{
	char *p = str;

	for (; *p != '\0'; p++)
	{
		putchar(*p);
	}
	putchar('\n');
}
