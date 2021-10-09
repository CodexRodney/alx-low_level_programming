#include "dog.h"
#include <string.h>
/**
 * new_dog- Creates a new dog details
 * @name: Name of dog created
 * @age: Age of dog created
 * @owner: Owner of dog created
 *
 * Return: NULL if functions fails
 *	always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *i = malloc((strlen(name) + 1));
	char *j = malloc((strlen(owner) + 1));
	dog_t *dog_new;

	strcpy(i, name);
	strcpy(j, owner);

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
	{
		free(i);
		free(j);
		return (NULL);
	}
	else
	{
		dog_new->name = i;
		dog_new->owner = j;
		dog_new->age = age;
	}
	return (0);
}
