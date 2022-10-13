#include "function_pointers.h"

/**
* print_name - calls function
* @name: argument to be passed to called function
* @f: pointer to function to be called
*/

void print_name(char *name, void (*f)(char *));
{
	f(name);
}
