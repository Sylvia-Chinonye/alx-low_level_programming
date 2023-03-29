#include "main.h"
#include <stdio.h>
/**
 *  _strlen - returns length of a string
 *  @s: input
 *
 *  Return: longi
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

