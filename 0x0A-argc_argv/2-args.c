#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
