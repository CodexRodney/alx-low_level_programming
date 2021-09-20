#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- A program that determines a number is positive,negative or zero
*@n: Number inputted for its sign to be known
*
*Return: Always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
