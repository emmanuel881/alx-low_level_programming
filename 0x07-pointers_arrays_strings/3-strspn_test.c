#include <stdio.h>
size_t _strspn(char* a, char* b);
int _strlen(char *str);
/**
 * @a: a string
 * @b: mybe a substring of a
 *
 * Return: 0
 */
int main()
{
	char a[] = "hello, world";
	char b[] = "oleh";
	char* c;

	c = b;
	unsigned int n;
	n = _strspn(a, b);
	printf("%d", n);
	return 0;
}
/**
 * _strlen - find string length
 * @str: a string
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strspn - check for substring number of occurences
 * @a: a string
 * @b: substring
 *
 * Return: size_t of number of substring occurences
 */
size_t _strspn(char* a, char* b)
{
	unsigned int spn = 0;
	int found;

	size_t len1 = _strlen(a);
	printf("string len 1: %d\n", len1);
	size_t len2 = _strlen(b);
	printf("string len 1: %d\n", len2);

	for (size_t i = 0; i < len1; i++)
	{
		found = 0;
		for (size_t j = 0; j < len2; j++)
		{
			if (*(a + i) == *(b + j))
			{
				printf("in a & b:%c\n", *(a + i));
				found = 1;
				break;
			}
		}
		if (!found) break;
		else spn++;
	}
	return (spn);
}
