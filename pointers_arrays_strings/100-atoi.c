#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	long result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-' && !started)
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;

			/* overflow check */
			if (result > (LONG_MAX - (*s - '0')) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;

		s++;
	}

	result *= sign;

	if (result > INT_MAX)
		return (INT_MAX);
	if (result < INT_MIN)
		return (INT_MIN);

	return ((int)result);
}
