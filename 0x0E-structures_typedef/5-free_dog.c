#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free memory oof newly created dog
 * @d: pointer to newly created dog
 * Description: long description
 *
 * Return: pointer to new dog information
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
