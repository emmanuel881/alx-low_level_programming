/**
 * print_dog - prints values of a struct dog
 * @d: structure variable
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	if (d -> name == NULL)
	{
		d -> name = "(nil)";
	}
	printf("Name: %s\n", d -> name);
	printf("Age: %f\n", d -> age);
	printf("Owner: %s\n", d -> owner);
}
