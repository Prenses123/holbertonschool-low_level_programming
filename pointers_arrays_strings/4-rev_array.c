#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function
 * @a -array of integers
 * @n - number
 * Return: array
 */
void reverse_array(int *a, int n)
{
    int temp;
    int i, j;
    
    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
