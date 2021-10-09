#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- A program that adds positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of string pointers containing
 *	pointers to the arguments passed
 * Return: 1 if arguments contains NaN
 *	otherwise 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, j, i;

	if (argc <= 1)
		print("0");
	for (j = 1; j < argc; j++)
	{
		if (isdigit(atoi(argv[j])) == 0)
		{
			printf("Error");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
