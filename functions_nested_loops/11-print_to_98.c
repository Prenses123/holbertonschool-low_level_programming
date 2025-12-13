#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: Numbers are separated by a comma followed by a space.
 *              The first printed number is n and the last is 98.
 */
void print_to_98(int n)
{
    if (n > 98)
    {
        while (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
        printf("%d\n", n);
    }
    else
    {
        while (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
        printf("%d\n", n);
    }
}
