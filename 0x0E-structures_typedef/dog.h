#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the owner of the new dog
 *
 * Description: this data structure is used to store information
 * about the new dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
