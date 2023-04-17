#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Return: the memory address of the location that contains the new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		new_dog->name = malloc(strlen(name));
		new_dog->name = strcpy(new_dog->name, name);
	}
	new_dog->age = age;
	if (owner != NULL)
	{
		new_dog->owner = malloc(strlen(owner));
		new_dog->owner = strcpy(new_dog->owner, owner);
	}
	return (new_dog);
}
