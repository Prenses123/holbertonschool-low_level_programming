#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	int printed;
	va_list args;

	i = 0;
	printed = 0;
	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		va_end(args);
		return;
	}

	while (format[i])
	{
		if (format[i] == 'c')
			printed = printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printed = printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printed = printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			char *s = va_arg(args, char *);

			printed = printf("%s", s ? s : "(nil)");
		}
		if (format[i + 1] && printed)
			printf(", ");
		printed = 0;
		i++;
	}

	printf("\n");
	va_end(args);
}
