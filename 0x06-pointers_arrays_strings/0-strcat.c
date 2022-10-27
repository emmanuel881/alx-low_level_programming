#include "main.h"
/**
 *  _strcat - concatinate strings
 *  @dest: a string
 *  @src: string to append
 *
 *  Return: dest concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int size_d;
	int size_s;

	size_d = 0;
	size_s = 0;
	while (dest[size_d] != '\0')
	{
		size_d++;
	}
	while (src[size_s] != '\0')
	{
		dest[size_d] = src[size_s];
		size_d++;
		size_s++;
	}
	dest[size_d] = '\0';

	return (dest);
}
