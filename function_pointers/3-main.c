#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - sadə kalkulyator
 * @argc: arqument sayı
 * @argv: arqumentlərin massividir
 * Return: 0 (uğurla)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	/* arqument sayı yoxlanılır */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* string → int çevrilir */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* operator funksiyası seçilir */
	op_func = get_op_func(argv[2]);

	/* operator düzgün deyilsə */
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* bölmə / modul sıfıra bərabər ola bilməz */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* əməliyyat icra olunur */
	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
