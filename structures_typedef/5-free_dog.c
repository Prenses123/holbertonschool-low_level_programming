#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog = function
 * @d: pointer to free
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
