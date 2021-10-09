#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- A program that multiplies 2 numbers
 * @argc: The number of arguments passed
 * @argv: An array of string pointers containing
 *	pointers to the arguments passed
 * Return: 1 if arguments passed incorrect
 *	otherwise 0
 */

int main(int argc, char *argv[])
{
	int firstnum, secondnum, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstnum = atoi(argv[1]);
	secondnum = atoi(argv[2]);
	result = firstnum * secondnum;
	printf("%d\n", result);
	return (0);
}
