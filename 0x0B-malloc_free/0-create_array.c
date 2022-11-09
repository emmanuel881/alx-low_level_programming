#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: characters to create
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	j = malloc(sizeof(char) * size);
	if (size == 0 || j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
