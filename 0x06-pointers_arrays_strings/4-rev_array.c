#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: number of elements in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}

