#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @u: array
 * Return: u
 */

char *leet(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] == 'a' || u[i] == 'A')
		{
			u[i] = '4';
		}
		else if (u[i] == 'e' || u[i] == 'E')
		{
			u[i] = '3';
		}
		else if (u[i] == 'o' || u[i] == 'O')
		{
			u[i] = '0';
		}
		else if (u[i] == 't' || u[i] == 'T')
		{
			u[i] = '7';
		}
		else if (u[i] == 'l' || u[i] == 'L')
		{
			u[i] = '1';
		}
	}
	return (u);
}
