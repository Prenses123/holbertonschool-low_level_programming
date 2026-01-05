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
	int i, j = 0;
	
	if (!name || !owner)
        return NULL;
	c = malloc(sizeof(dog_t));
	if (c == NULL)
		return (NULL);
	while (name[j] != '\0')
		j++;	
	(*c).name = malloc(j + 1);
	if ((*c).name == NULL)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		(*c).name[i] = name[i];
	c->name[i] = '\0';
	j = 0;
	while (owner[j] != '\0')
		j++;
	(*c).owner = malloc(j + 1);
	if ((*c).owner == NULL)
	{
		free((*c).name);
		free(c);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		(*c).owner[i] = owner[i]; 
	(*c).age = age;
	c->owner[i] = '\0';
	return (c);
}

