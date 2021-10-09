#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- Initializes a variable of type struct dog
 * @d: Pointer to the variable to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ;

	struct dog *new_dog;

	new_dog = d;
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
