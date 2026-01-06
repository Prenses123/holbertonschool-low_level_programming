#include <stdlib.h>
#include <string.h>
/**
 * print_name - prints a name using a callback function
 * @name: pointer to the name to print
 * @f: pointer to a function that takes a char* and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
