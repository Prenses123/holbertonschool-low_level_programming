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
	int result = 0;
	int started = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			digit = *s - '0';

			/* overflow yoxlaması */
			if (result > (INT_MAX - digit) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + digit;
		}
		else if (started)
			break;

		s++;
	}

	/* INT_MIN üçün xüsusi halda overflow-un qarşısı alınır */
	if (result == INT_MIN && sign == -1)
		return (INT_MIN);

	return (sign * result);
}
