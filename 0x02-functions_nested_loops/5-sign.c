#include "main.h"
/**
 * print_sign - prints the sign of a number
 * determines if the number is greater, equal or less than zero
 *
 * @n: the input number is an integer
 *
 * Return: 1 is greater than zero. 0 is zero
 * -1 is less than zero.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
