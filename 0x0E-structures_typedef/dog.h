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
}

#endif
