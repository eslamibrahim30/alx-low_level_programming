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
	unsigned int size_name = name == NULL ? 0 : strlen(name) + 1;
	unsigned int size_owner = owner == NULL ? 0 : strlen(owner) + 1;
	unsigned int i = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	if (name == NULL)
		dog->name = NULL;
	else
	{
		dog->name = malloc(size_name);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		for (i = 0; i < size_name - 1; i++)
			dog->name[i] = name[i];
		dog->name[i] = '\0';
	}
	dog->age = age;
	if (owner == NULL)
		dog->owner = NULL;
	else
	{
		dog->owner = malloc(size_owner);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		for (i = 0; i < size_owner - 1; i++)
			dog->owner[i] = owner[i];
		dog->owner[i] = '\0';
	}
	return (dog);
}
