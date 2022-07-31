#include "main.h"
#include <string.h>

/**
 * palindrome_check - checks if a string is a palindrome
 * @str: string pointer to be checked
 * @i: last char indicator to compare
 *
 * Return: 0 or 1
 */

int palindrome_check(char *str, int i)
{
	int j = 0;

	j = strlen(str);
	if (str[0] != '\0' && str[0] != str[j - i - 1])
		return (0);
	else if (str[1] == '\0' && str[0] == str[j - i - 1])
		return (1);
	else
		return (palindrome_check(str + 1, i + 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string input to function
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i = 0;

	i = strlen(s);
	if (*s == '\0')
		return (1);
	else if (s[0] != s[i - 1])
		return (0);
	else
		return (palindrome_check(s + 1, 1));
}
