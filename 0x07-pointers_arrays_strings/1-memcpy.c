#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: variable where memory is stored
 * @src: variable where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int s = n;
	
	for (; d < s; d++)
	{
		dest[d] = src[s];
		n--;
	}
	return (dest);
}

