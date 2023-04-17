#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner's name
 *
 * Description: this structure is used to store data about some dog
 * by defining its name, age and owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
