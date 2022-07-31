#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - as strstr c library function
 * @haystack: string op 1
 * @needle: string op 2
 *
 * Return: ptr
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
