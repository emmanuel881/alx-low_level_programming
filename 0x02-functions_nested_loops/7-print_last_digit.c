#include "main.h"

/**
 * print_last_digit()- last number
 *
 * @n: The int to print
 * Return: 0
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	_putchar(c);
	return (c);
}
