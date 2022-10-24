#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: The first parameter to be swapedd into
 * @b: the second parameter to be swaped into
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
