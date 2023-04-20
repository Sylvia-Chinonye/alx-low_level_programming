#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as it is
 * @name: a string
 * @f: a pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ();

	f(name);
}

