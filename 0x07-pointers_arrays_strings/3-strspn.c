#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer
 * @accept: another pointer
 *
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[r])
			{
				d++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
