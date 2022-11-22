#include <stdarg.h>
/**
 * sum_them_all - sums up integer arguments
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	int extract;
	va_list list;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		extract = va_arg(list, int);
		sum = sum + extract;
	}
	va_end(list);
	return (sum);
}
