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
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);
	if (name == NULL)
		dog_new->name = " ";
	else
		dog_new->name = name;
	if (owner == NULL)
		dog_new->owner = " ";
	else
		dog_new->owner = owner;
	dog_new->age = age;
	return (0);
}
