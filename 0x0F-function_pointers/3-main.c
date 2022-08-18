#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*func_ptr)(int, int);
	int i, j, res;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	i = atoi(argv[3]);
	j = atoi(argv[1]);
	func_ptr = get_op_func(argv[2]);
	res = func_ptr(j, i);
	if (func_ptr == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
