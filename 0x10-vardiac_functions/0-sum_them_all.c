#include <variadic_functions.h>

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
	int i;
	va_list ap;

	sum = 0;
	va_start(ap,n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
