#include <stdlib.h>
#include <string.h>
void array_iterator(int *array, unsigned int size, void (*action)(int));
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	unsigned int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
