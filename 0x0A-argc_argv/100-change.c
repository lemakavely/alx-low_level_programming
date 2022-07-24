#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds number of coins for change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i, j, coins = 0, totalcoins = 0;
	int stdcoins[] = {25, 10, 5, 2, 1};

	j = atoi(argv[1]);
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	else if (j <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 0; stdcoins[i]; i++)
		{
			coins = j / stdcoins[i];
			j -= coins * stdcoins[i];
			totalcoins += coins;
			if (j == 0)
				break;
		}
		printf("%d\n", totalcoins);
	}
	return (0);
}
