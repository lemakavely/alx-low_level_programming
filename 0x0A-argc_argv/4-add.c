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

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	if (!argv[1])
	{
		printf("%d\n", 0);
	}
	if (sum)
	{
		printf("%d\n", sum);
	}
	return (0);
}
