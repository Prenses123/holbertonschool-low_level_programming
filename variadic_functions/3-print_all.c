#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints all
 * @format: format of variables
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *sep = "";
	char *s;

	va_start(ap, format);

	if (!format)
	{
		printf("\n");
		va_end(ap);
		return;
	}

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			sep = ", ";
			break;
		case 's':
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
			break;
		default:
			break;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
