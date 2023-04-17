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

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	c_name = malloc(strlen(name) + 1);
	if (c_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = c_name;
	dog->age = age;
	c_owner = malloc(strlen(owner) + 1);
	if (c_owner == NULL)
	{
		free(c_name);
		free(dog);
		return (NULL);
	}
	dog->owner = c_owner;
	return (dog);
}
