#include "dog.h"

/**
 * init_dog - initializes a structure
 * @d: a structure pointer
 * @name: value for structure member variable
 * @age: value for structure member variable
 * @owner: value for structure member variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
