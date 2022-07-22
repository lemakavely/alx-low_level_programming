#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of inputs
 * @argc: number of arguments entered to prompt
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
