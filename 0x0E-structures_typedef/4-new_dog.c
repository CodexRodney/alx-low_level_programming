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
	int i = (strlen(name)) + 1;
	int j = (strlen(owner)) + 1;
	char cn[i];
	char co[n];
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
		dog_new->name = cn;
		dog_new->owner = co;
		dog_new->age = age;
	}
	return (0);
}
