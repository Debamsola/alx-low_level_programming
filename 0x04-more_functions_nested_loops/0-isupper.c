#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 * @c:parameter that is to be checked
 *
 * Return: 1 if c uppercase, 0 if not
 */

int _isupper(int c)
{
	char ret;

	if (c >= 'A' && c <= 'Z')
		ret = 1;
	else
		ret = 0;

	return (ret);
}
