#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- Does the sum of all its parameters
 * @n: Number of parameters
 *
 * Return: ALways total sum of parameters
 *	if n is 0 returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	int a;
	va_list ap;

	sum = 0;
	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, int);
		sum = sum + a;
	}
	va_end(ap);
	return (sum);
}
