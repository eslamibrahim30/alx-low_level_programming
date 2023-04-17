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
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
