/**
 * struct dog - create structure for dogs
 * @name: name of the dog
 * @age: dog's age
 * @owner: name of owner
 *
 * Description: Longer description
 */
#ifdef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
