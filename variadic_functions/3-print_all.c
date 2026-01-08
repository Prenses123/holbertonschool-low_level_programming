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
	int i = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while(format[i])
	{
		switch(format[i])
		{
			case 'c':
			{
				int c = va_arg(args, int);
                printf("%c", c);
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
				printf("%s", s ? s : "(nil)");
				break;
			}
			default:
				break;
		}
		format[i + 1] && printf(", ");

		i++;
	}
	printf("\n");
	va_end(args);
}
