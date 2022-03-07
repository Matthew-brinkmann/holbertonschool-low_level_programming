#include <stdio.h>
#include "dog.h"

/**
 * print_dog - will print info stored in dog
 * @d: pointer to dog structure.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
