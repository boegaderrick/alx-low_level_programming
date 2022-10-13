#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
* get_op_func - determines what operator to use
* @s: parameter to help with the determination
* Return: function with correct operator, NULL if none suitable
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
