#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps value of two integers
 * @a: integer to swap
 * @b: integer to swap
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
