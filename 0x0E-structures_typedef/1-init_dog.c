#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to start of structure
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
