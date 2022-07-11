#include <stdio.h>
/**
 * rev_string - string in reverse
 * @s: string to bee coomputed
 *
 * Return: none
 */

void rev_string(char *s)
{
	char *p = s;
	char *q, *r;
	char c;
	int len;
	int i;

	q = s;
	r = s;
	for (; *p != '\0'; p++)
	{
	}
	len = p - s;

	for (i = 1; i < len; i++)
		r++;
	for (i = 0; i < len / 2; i++)
	{
		c = *r;
		*r = *q;
		*q = c;
		q++;
		r--;
	}
}
