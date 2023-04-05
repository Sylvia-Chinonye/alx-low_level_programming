#include "main.h"
/**
 * set_string - sets the value of a a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
