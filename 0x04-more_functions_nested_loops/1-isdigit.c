#include "main.h"

/**
 * _isdigit - check if a character is an digit (0 to 9)
 *
 * @c: int to be tested
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	char ret;

	if (c >= '0' && c <= '9')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
