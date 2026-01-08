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
				int c = va_arg(args, int);
                printf("%c\n", c);
				break;
			}
			case 'i':
			{
				int i = va_arg(args, int);
				printf("%d", i);
				break;
			}
			case 'f':
			{
				double f = va_arg(args, double);
				printf("%f", f);
				break;
			}
			case 's':
			{
				char *s = va_arg(args, char *);
				printf("%s\n", s ? s : "(nil)");
				break;
			}
		}
	}
	printf("\n");
	va_end(args);
}
