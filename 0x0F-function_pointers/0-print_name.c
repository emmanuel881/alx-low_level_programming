#include <stdio.h>
/**
 * print_name - take and compute function pointers as arguments
 * @name: name
 * @f: pointer to a function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
