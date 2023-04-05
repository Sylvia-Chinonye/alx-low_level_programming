#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a pointer varaiable
 * @size: a variable
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int s;

	sum1 = 0;
	sum2 = 0;

	for (s = 0; s < size; s++)
	{
		sum1 = sum1 + a[s * size + s];
	}

	for (s = size - 1; s >= 0; s--)
	{
		sum2 += a[s * size + (size - s - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
