#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees all memory of a dog_t
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
