#include "main.h"
/**
 * _isupper - evalute is letter is uppercase
 * @c: print int
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
