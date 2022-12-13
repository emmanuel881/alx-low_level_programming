#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments 
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	(void)ac;
	int i;

	i = 0;
	while(av[i])
	{
		printf("%s", av[i]);
		i++;
	}
	printf("\n");
}

