#include "main.h"
/**
 * _strncat - concatinate strings
 * @dest: string
 * @src: string to concatinate
 * @n: number of values to cooncatinate
 *
 * Return: dest concatinated
 */
char *_strncat(char *dest, char *src, int n)
{
	int size_d;
	int size_s;

	size_s = 0;
	size_d = 0;
	while (dest[size_d] != '\0')
	{
		size_d++;
	}
	while (size_s < n)
	{
		dest[size_d] = src[size_s];
		size_d++;
		size_s++;
	}
	dest[size_d] = '\0';

	return (dest);
}

