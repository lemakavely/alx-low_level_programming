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
#endif
