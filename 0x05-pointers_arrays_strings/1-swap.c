#include "main.h"

/**
* swap_int - swaps input parameters
* @a: parameter
* @b: parameter
*/

void swap_int(int *a, int *b)
{
	int swapA, swapB;

	swapA = *a;
	swapB = *b;

	*a = swapB;
	*b = swapA;
}
