#include <stdio.h>

/**
 * main - print the exe name
 * @argc: argument number
 * @argv: pointer to the array of arguments
 * Return: argc
 */

int main(int argc, char **argv)
{
	printf("%s", argv[0]);
	return (argc);
}
