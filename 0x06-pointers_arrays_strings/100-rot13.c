#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @u: the array
 * Return: u
 */

char *rot13(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if ((*(u + i) >= 'a' && *(u + i) < 'n')
				|| (*(u + i) >= 'A' && *(u + i) < 'N'))
		{
			*(u + i) += 13;
		}
		else if ((*(u + i) >= 'n' && *(u + i) <= 'z')
				|| (*(u + i) >= 'N' && *(u + i) <= 'Z'))
		{
			*(u + i) -= 13;
		}
	}
	return (u);
}
