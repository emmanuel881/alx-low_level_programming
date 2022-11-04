#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
