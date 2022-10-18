#include "main.h"

/**
 *  _islower - a function that checks for lowercase character.
 *
 *  @c: The output to be checked
 *
 * Return: 1 if output is lowercase, 0 if not.
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z' && c++)
			return (1);
		else
			return (0);
}
