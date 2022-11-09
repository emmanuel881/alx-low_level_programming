#include "main.h"
#include <stdlib.h>
/**
 * _strlen - get string length
 * @str: pointer to string
 *
 * Return: 0
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/**
 * _strdup - creates a copy of a string
 * @str: pointer to a string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int len, i;
	char *str2;

	len = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	str2 = malloc(sizeof(char) * (len + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
