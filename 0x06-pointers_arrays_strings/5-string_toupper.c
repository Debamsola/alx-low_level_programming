#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @u: array to work on
 * Return: u
 */

char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] >= 'a' && u[i] <= 'z')
			u[i] = u[i] - 32;
	}
	return (u);
}
