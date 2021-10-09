#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- A program that prints its name
 * @argc: The number of arguments passed
 * @argv: An array of string pointers containing
 *	pointers to the arguments passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;

	n = argc - 1;
	printf("%d\n", n);
	return (0);
}
