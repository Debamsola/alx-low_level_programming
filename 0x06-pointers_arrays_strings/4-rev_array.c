#include "main.h"

/**
 * reverse_array - a function that reverses the
 * content of an array of integers
 * @a: Array name
 * @n: element of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int arr;

	for (i = 0; i < n != '\0'; i++)
	{
		n--;
		arr = a[1];
		a[i] = a[n];
		a[n] = arr;
	}
}
