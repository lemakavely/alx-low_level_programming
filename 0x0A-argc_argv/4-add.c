#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of all given positive numbers
 * @argc: number of arguments entered to prompt
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
