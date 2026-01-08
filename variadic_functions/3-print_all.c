#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints all
 * @format: format of variables
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while(*format)
	{
		switch(*format)
		{
			case 'c':
			{
				char c = va_arg(args, char);
				printf("%c", c);
			}
			case 'i':
			{
				int i = va_arg(args, int);
				printf("%d", i);
			}
			case 'f':
			{
				float f = va_arg(args, float);
				printf("%f", f);
			}
			case 's':
			{
				char *s = va_arg(args, char *);
				printf("%s\n", s ? s : "(nil)");
			}
	}
	printf("\n");
	va_end(args);
}
