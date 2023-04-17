#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory that contains data about a dog
 * @d: the given memory address
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
