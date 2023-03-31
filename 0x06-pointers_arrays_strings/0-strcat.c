#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @src: a string
 * @dest: another string
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s;

	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}


