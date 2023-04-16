#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string to copy to
 * @src: string to copy from
 *
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; d < c; d++)
	{
		dest[d] = src[d];
	}
	dest[c] = '\0';
	return (dest);
}
