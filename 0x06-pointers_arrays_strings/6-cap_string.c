#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @u: array to be worked on
 * Return: u
 */

char *cap_string(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((u[i] >= 97 && u[i] <= 122))
			{
				u[i] = u[i] - 32;
				continue;
			}
		}
		else if (u[i] == ' ')
		{
			++i;
			if (u[i] >= 97 && u[i] <= 122)
			{
				u[i] = u[i] - 32;
				continue;
			}
		}
		else
		{
			if (u[i] >= 65 && u[i] <= 90)
			{
				u[i] = u[i] + 32;
			}
		}
	}
	return (u);
}
