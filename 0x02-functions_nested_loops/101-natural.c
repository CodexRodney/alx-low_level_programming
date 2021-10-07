#include <stdio.h>

/**
 * main- Computes and prints the sum of all the
 * multiples of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int maxi = 1024;
	int i, soth = 0, sof = 0, soa, j, k;

	i =0;
	while (i < maxi)
	{
		i++;
		j = i % 3;
		if (j == 0)
			soth = soth + i;
	}
	i = 0;
	while (i < maxi)
	{
		i++;
		k = i % 5;
		if (k == 0)
			sof = sof + i;
	}
	soa = soth + sof;
	printf("%d\n", soa);
	return (0);
}
