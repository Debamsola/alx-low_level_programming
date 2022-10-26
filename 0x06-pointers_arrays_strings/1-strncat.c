#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: src is to be added
 * @src: it is added to dest
 * @n: limited number of letter in the string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (s = 0; s < n; s++)
	{
		dest[i + s] = src[s];
		if (src[s] == '\0')
			s = n;
	}
	return (dest);
}
