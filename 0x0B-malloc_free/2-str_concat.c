#include "main.h"
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
 * str_concat - concatinates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int len;

