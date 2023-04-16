#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings, will use n bytes and
 * does not need to be null-terminated if it contains n or more bytes
 *
 * @src: a string
 * @dest: another string
 * @n: a byte
 *
 * Return: a pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

