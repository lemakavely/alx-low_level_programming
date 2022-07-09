#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - print a char
 * @c: character to be printed
 *
 * Return: none
 */

void _putchar(char c);

/**
 * _isupper - checks if a char is upper case or not
 * @c: character to be checked
 *
 * Return: none
 */

int _isupper(int c);

/**
 * _isdigit - checks if an input is digit or not
 * @c: input to be checked
 *
 * Return: none
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: operand 1
 * @b: operand 2
 *
 * Return: none
 */

int mul(int a, int b);

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: none
 */

void print_numbers(void);

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: none
 */

void print_most_numbers(void);

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 * Return: none
 */

void more_numbers(void);

/**
 * print_line - prints a line
 * @n: line length
 *
 * Return: none
 */

void print_line(int n);


/**
 * print_diagonal - prints a line
 * @n: line length
 *
 * Return: none
 */

void print_diagonal(int n);


/**
 * print_square - prints a square
 * @size: square size
 *
 * Return: none
 */

void print_square(int size);


/**
 * print_triangle - prints a triangle
 * @size: triangle size
 *
 * Return: none
 */

void print_triangle(int size);

/**
 * print_number - print multiple digits and negatives
 * @n: to be printed
 *
 * Return: none
 */

void print_number(int n);

#endif
