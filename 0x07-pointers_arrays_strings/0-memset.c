#include "main.h"
/**
 * _memset - fill memory with constant b
 * @s: memory pointer
 * @b: constant value
 * @n: number of bytes in the memory
 *
 * Return: pointer to memory  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
