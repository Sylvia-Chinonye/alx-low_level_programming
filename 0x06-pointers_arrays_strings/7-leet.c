#include <stdio.h>
#include "main.h"
/**
 * leet - encode a string into 1337
 * @n: a value
 *
 * Return: n
 */
char *leet(char *n)
{
	int d, s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[d] == s1[s])
			{
				n[d] = s2[s];
			}
		}
	}
	return (n);
}
