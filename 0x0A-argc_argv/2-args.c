#include <stdio.h>

/**
 * main - prints all given arguments
 * @argc: number of arguments entered to prompt
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
