#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees allocated memory for a dog
 * @d: the address of the allocated memory
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
