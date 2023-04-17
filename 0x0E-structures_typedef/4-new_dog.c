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
	dog_t new_dog;
	unsigned int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(strlen(name));
	for (i = 0; i < (unsigned int)(strlen(name)); i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->age = age;
	new_dog->owner = malloc(strlen(owner));
	for (i = 0; i < (unsigned int)(strlen(name)); i++)
	{
		new_dog->owner[i] = owner[i];
	}
}
