#include "dog.h"

/**
 * init_dog - function that initializes
 * a variable of type struct dog
 * @d: will be the dog to be initialized
 * @name: will be the dog's name
 * @age: will be the dog's age
 * @owner: will be the dog's owner
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
