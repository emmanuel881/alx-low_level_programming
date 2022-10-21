#include "main.h"

/**
 * _isalpha - return 1 if c is a lower or uppercase letter
 *
 * @c: The int to print
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
