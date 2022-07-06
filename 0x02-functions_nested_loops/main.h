#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - prints _putchar
 * @c: character to be printed
 *
 * Return: no return
 */

int _putchar(char c);

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet_x10(void);

/**
 * _islower - checks if a char is lower case
 * @c: character to be checked either lower or upper case
 *
 * Return: none
 */

int _islower(int c);

/**
 * _isalpha - checks if a char is lower case
 * @c: character to be checked either alphabet or not
 *
 * Return: none
 */

int _isalpha(int c);

/**
 * print_sign - checks sign of number
 * @n: number to be checked either +, 0 or -
 *
 * Return: none
 */

int print_sign(int n);

/**
 * _abs - computes absolute value
 * @int: number to be computed
 *
 * Return: none
 */

int _abs(int);

/**
 * print_last_digit - print last digit
 * @int: number to be computed
 *
 * Return: none
 */

int print_last_digit(int);


/**
 * jack_bauer - print minutes in a day
 *
 * Return: none
 */

void jack_bauer(void);


/**
 * times_table - prints 9 times table
 *
 * Return: none
 */

void times_table(void);

/**
 * add - add the given numbers
 * @int: operand 1
 * @int: operand 2
 *
 * Return: none
 */

int add(int, int);

/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 *
 * Return: none
 */

void print_to_98(int n);
#endif
