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
 * dog_t- Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
