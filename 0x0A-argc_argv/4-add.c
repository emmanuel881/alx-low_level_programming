#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum up arguments
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		sum = 0;
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("%d", 0);
	}
	return (0);
}
