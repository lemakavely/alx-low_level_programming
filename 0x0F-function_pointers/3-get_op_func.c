#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - pointer to a function
 * @s: character of operation
 * @num1: operand one
 * @num2: operand two
 *
 * Return: pointer to function or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (s == ops[i].op)
			break;
		i++;
	}
	return (ops[i].f);
}
