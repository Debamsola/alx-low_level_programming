#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number.
 * @n: integer
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int square = 2;


	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (isqrt(n, square));
}

