#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: a string
 *
 * Return: always 0
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (0);
}