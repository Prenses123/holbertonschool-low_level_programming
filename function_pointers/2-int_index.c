#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{       
        if (array == NULL || cmp == NULL)
                return NULL;
	if (size <= 0)
                return (-1);

	int i, k = 0;

	for (i = 0; i < size; i++)
	{
	       if (cmp(array[i]) != 0)
		{
			k = 1;
			return (i);
		}
	}
	if (k == 0)
		return (-1);
}
