#ifndef DOG_H
#define DOG_H

#include <sdtlib.h>
#include <stdio.h>

/* structure definitions */

/**
 * struct dog - structure for dog
 * @name: structure string member
 * @age: age of struct
 * @owner: dog owner;
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
