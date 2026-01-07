#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - operator və ona uyğun funksiya
 * @op: operator simvolu
 * @f: operator funksiyasına pointer
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Operator funksiyaları */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Operator seçici funksiyası */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
