#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string is a valid positive number, 0 otherwise
 */
int is_number(char *s)
{
  int i = 0;

  if (s[0] == '\0')
    return (0);

  while (s[i])
  {
    if (!isdigit(s[i]))
      return (0);
    i++;
  }
  return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on er*
