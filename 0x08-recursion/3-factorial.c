#include "main.h"
/**
 *factorial- A function that prints the factorial of a number
 *@n: An integer representing number whose factorial is to be done
 *
 * Return: returns -1 if its an error
 */

int factorial(int n)
{
	if(n<0)
	{
		return (-1);
	}
	if(n == 0)
	{
		return(1);
	}
	else
	{
		return (n * factorial(n - 1));
	};
}

