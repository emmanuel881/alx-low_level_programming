#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: where to copy to
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}
