#include "main.h"
/**
 * _strlen - find string length
 * @s: a pointer argument
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
