#include "main.h"

/**
 * *_strcat -  a function that concatenates two strings.
 * @dest: src is to be added to
 * @src: this is to be added  to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
