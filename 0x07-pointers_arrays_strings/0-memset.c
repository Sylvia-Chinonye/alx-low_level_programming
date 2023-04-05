#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: a variable
 * @n: numberof bytes
 *
 * Return: n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;
	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
