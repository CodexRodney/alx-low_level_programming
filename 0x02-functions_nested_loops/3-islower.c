#include "main.h"

/**
 * _islower- Checks for lowercase
 *@c: Character to be inspected
 * Return: 1 if lower
 *	0 if otherwise
 */

int _islower(int c)
{
	int la = 'a', lb = 'z';

	if (c >= la && c <= lb)
	{
		return (1);
	}
	else
		return (0);
}
