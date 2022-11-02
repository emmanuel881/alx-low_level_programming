#include "main.h"
/**
 * _strchr - locates a character n a string
 * @s: a string pointer
 * @c: chaacter we are looking for
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
}
