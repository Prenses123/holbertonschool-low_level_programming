#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	size_t i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
