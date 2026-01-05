#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c;
	int i;

	c = malloc(sizeof(dog_t));
	if (c == NULL)
		return (NULL);
	(*c).name = malloc(strlen(name) + 1);
	if ((*c).name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		(*c).name[i] = name[i]; 
	(*c).owner = malloc(strlen(owner) + 1);
	if ((*c).owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		(*c).owner[i] = owner[i]; 
	(*c).age = age;
	return (c);
}

