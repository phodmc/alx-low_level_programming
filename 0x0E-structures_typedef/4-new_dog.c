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
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	new_dog->name = (char *) malloc(name_len + 1);
	new_dog->owner = (char *) malloc(owner_len + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}

/**
* _strlen - returns length of string s
* @s: char pointer variable
*
* Return: int - lenght of string s
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}

/**
 * *_strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
