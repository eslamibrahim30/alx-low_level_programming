#include <stdlib.h>
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
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (name == NULL ? "(nil)" : name);
	new_dog->age = age;
	new_dog->owner = (owner == NULL ? "(nil)" : owner);
	return (new_dog);
}
