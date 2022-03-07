#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - will allow the creating of a new dog.
 * @name: the name of new dog
 * @age: Age of the new dog
 * @owner: The owner of the new dog
 * Description: long description
 *
 * Return: pointer to new dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
