#include "main.h"
/**
 * print_rev - print string in reverse order
 * @s: string pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int size;

	size = 0;
	while (*(s + size) != '\0')
	{
		size++;
	}
	while (*(s + size) >= 0)
	{
		_putchar (*(s + size));
	}
}
