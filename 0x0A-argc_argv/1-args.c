#include <stdio.h>
/**
 * main - prints number of arguments
 * @argv: string of arguments
 * @argc: number of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	(void)argv;
	printf("%d\n", i);
	return (0);
}
