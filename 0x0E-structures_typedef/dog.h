#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog- Has dog details
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: name of owner of the dog
 *
 * Description- Contains Dogs Details
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t- Contains details of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description- Contains Dogs Details
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
