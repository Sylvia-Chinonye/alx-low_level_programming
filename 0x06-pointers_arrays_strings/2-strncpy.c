#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: a string
 * @src: a string
 * @n: a byte
 *
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}

