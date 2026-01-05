#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- prints a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n",(*d).name);
	if ((*d).age == NULL)
                printf("Age: (nil)");
	else
		printf("%f\n",(*d).age);
	if ((*d).owner == NULL)
                printf("Owner: (nil)");
	else
		printf("%s\n",(*d).owner);
}	
