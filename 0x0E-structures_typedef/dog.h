#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
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

/* type definitions */
typedef struct dog dog_t

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
