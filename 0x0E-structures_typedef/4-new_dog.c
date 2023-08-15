#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name - string
 * @age: dog age - float
 * @owner: dog owner - string
 * Return: pointer to newly created dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *my_name = name;
	char *my_owner = owner;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = my_name;
	new_dog->age = age;
	new_dog->owner = my_owner;

	return (new_dog);
}
