#include <stdlib.h>
#include <stdarg.h>
/*
 * sum_them_all(const unsigned int n, ...) = function that find sum
 * n = number of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_args(args, unsigned int);
		sum += x;
	}
	
	va_end(args);
	return (sum);
}
