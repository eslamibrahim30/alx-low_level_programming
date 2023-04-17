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
	char *c_name;
	char *c_owner;
	dog_t *dog;

	dog = (dog_t *)malloc(strlen(dog_t) + 1);
	c_name = malloc(strlen(name) + 1);
	c_owner = malloc(strlen(owner) + 1);
	if (dog == NULL || c_name == NULL || c_owner == NULL)
	{
		return (NULL);
	}
	dog->name = c_owner;
	dog->age = age;
	dog->owner = c_owner;
	return (dog);
}
