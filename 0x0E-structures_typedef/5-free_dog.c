#include "dog.h"

/**
 * free_dog - free heap of struct
 * @d: struct pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
