#include <stdlib.h>
#include <string.h>
/*
 * print_name = function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
