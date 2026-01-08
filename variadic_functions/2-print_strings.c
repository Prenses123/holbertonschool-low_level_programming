#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @n: number of arguments
 * @separator: String to be printed between numbers
 * Return:nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (x == NULL)
			printf("(nil)");
		if (x != NULL)
			printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
