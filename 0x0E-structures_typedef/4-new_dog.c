#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Allocates memory for new dog's data
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Return: the memory address of the location that contains the new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		dog->name = malloc(1000);
		dog->name = memcpy(dog->name, name, strlen(name));
	}
	dog->age = age;
	if (name != NULL)
	{
		dog->owner = malloc(1000);
		dog->owner = memcpy(dog->owner, owner, strlen(owner));
	}
	return (dog);
}
