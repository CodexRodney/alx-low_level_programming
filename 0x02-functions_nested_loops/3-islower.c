#include "main.h"

/**
 * _islower- Checks for lowercase characters
 *
 * Return: 1 if lower
 *	0 if otherwise
 */

int _islower(int c)
{
	int la = 'a', lb = 'z';

	if ( c >= "a" && c <= "z")
	{
		return (1);
	}
	else
		return (0);
}
