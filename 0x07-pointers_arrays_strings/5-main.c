#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "gworld";
    char *t;

    t = _strstr(s, f);
    if (t == NULL)
	    puts("failed");
    else
    	printf("%s\n", t);
    return (0);
}
