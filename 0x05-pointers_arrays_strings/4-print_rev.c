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
	for (size = size - 1; size >= 0; size--)
	{
		_putchar(*(s + size));
	}
	_putchar('\n');
}
