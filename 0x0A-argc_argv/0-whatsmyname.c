#include <stdio.h>
#include "main.h"
/**
 * main - prints it's name and renames
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
