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
	int num = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("%s\n", "Error");
			sum = 0;
			return (1);
		}
	}
	if (argv[1] == NULL)
	{
		printf("%d\n", 0);
	}
	if (sum)
	{
		printf("%d\n", sum);
	}
	return (0);
}
