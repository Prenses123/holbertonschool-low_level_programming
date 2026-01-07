#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @n: number of arguments
 * Return:noting
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args,n);
	if (n <= 0)
		printf("\n");
		return;
	for (i = 0; i < n; i++)
	{
		int number = va_arg(args,int);

		printf("%d", number);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
