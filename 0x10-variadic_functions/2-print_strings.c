#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings only
 * @separator: the separation character between strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *extStr;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		extStr = va_arg(list, char *);
		if (!extStr)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", extStr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

