#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: a separator between numbers
 * @n: number of numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int extract;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		extract = va_arg(list, int);
		printf("%d", extract);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
