#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string
 * @s: string to bee coomputed
 *
 * Return: none
 */

void _puts(char *s)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		putchar(*p);
	}
	putchar('\n');
}
