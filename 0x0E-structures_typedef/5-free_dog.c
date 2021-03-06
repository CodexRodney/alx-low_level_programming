#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- A function that frees dog
 * @d: Dog to be freed
 *
 * Return- Always 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
