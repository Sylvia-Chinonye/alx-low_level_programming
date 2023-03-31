#include "main.h"
/**
 * rot13 - encodes a string to rot13
 * @n: pointer to a string
 *
 * Return: *n
 */
char *rot13(char *n)
{
	int d;
	int s;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (s = 0; s < 52; s++)
		{
			if (n[d] == data1[s])
			{
				n[d] = datarot[s];
				break;
			}
		}
	}
	return (n);
}
