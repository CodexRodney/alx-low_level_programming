#include "main.h"
#include <stdio.h>
/**
 * _abs- Computes the absolute value of a number
 *@a: Number to be acted upon
 *
 * Return: Always absolute value of a number
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
