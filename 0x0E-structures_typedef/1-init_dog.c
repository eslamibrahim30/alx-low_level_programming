#include "dog.h"

/**
 * init_dog - Declares a new dog
 * @d: the address of the memory that should contain the new dog's data
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
