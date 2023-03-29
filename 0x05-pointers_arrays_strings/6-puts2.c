#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character
 * @str: a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int longi = 0;
	int b = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	b = longi - 1;
	for (o = 0; o <= b; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
