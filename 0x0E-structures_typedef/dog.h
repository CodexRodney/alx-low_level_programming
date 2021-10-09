#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog- Has dog details
 * @nam:e: Name of the dog
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t- Typedef for struct dog
 */

typedef struct dog dog_t;

#endif
