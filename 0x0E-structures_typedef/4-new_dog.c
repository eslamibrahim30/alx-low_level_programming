#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Defines a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the owner of the new dog
 *
 * Return: a pointer to the memory where the new dog data is stored,
 * Or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int size_name;
	unsigned int size_owner;
	unsigned int i;

	dog_t *dog = malloc(sizeof(dog));
	if (dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		dog->name = NULL;
	}
	else
	{
		size_name = strlen(name) + 1;
		dog->name = malloc(size_name);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		for (i = 0; i < size_name - 1; i++)
		{
			dog->name[i] = name[i];
		}
		dog->name[i] = '\0';
	}
	dog->age = age;
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		dog->owner = NULL;
	}
	else
	{
		size_owner = strlen(owner) + 1;
		dog->owner = malloc(size_owner);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		for (i = 0; i < size_owner - 1; i++)
		{
			dog->owner[i] = owner[i];
		}
		dog->owner[i] = '\0';
	}
	return (dog);
}
