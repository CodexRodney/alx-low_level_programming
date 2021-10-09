#include "dog.h"

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
	char *cn;
	char *co;
	dog_t *dog_new;

	strcpy(cn, name);
	strcpy(co, owner);

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
	{
		free(cn);
		free(co);
		return (NULL);
	}
	else
	{
		dog_new->name = name;
		dog_new->owner = owner;
		dog_new->age = age;
	}
	return (0);
}
