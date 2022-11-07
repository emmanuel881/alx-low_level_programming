#include <stdio.h>
#include <stdlib.h>
/**
 * main -multiplies two arguments
 * @argc: number of argumments
 * @argv: string of arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc > 1 && argc <= 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	printf("Error\n");
	return (1);
}
