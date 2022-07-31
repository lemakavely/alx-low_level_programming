#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string input to function
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i = 0, m = 0, j = 0, k = 0;

	for (i = 0; s[i]; i++)
		;
	if (s[0] == '\0')
		m = 1;
	for (j = 0, k = i - 1; j < i && s[j] != '\0'; j++, k--)
	{
		if (s[j] == s[k])
			m = 1;
		else
		{
			m = 0;
			break;
		}
	}
	return (m);
}
