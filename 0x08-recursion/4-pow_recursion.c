#include "main.h"

/**
 * _pow_recursion- A fuction that returns value of x raised power y
 * @x: an integer representing the number
 * @y: an interger representing the power
 *
 * Return: Returns -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		int i;

		i = x * _pow_recursion(x,y-1);
		return (i);
	};
}
