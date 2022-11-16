#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog
 */

/**
 * struct dog - A new type that describes a dog
 * @name: will be the dog's name
 * @age: will be dog's age
 * @owner: will be the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for the struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner)
void free_dog(dog_t *d)

#endif
