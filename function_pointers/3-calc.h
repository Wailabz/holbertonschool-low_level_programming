#ifndef _3_CALC_H
#define _3_CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - struct
 * @op: operator
 * @f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif