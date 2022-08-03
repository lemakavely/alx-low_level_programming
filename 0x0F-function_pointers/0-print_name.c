#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: to be printed
 * @f: function pointer
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
