#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- A program that prints all arguments
 *	it receives
 * @argc: The number of arguments passed
 * @argv: An array of string pointers containing
 *	pointers to the arguments passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
