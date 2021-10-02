#include "main.h"

/**
 * _isalpha- Checks for alphabetic characters
 * @c: Character to be inspected
 *
 * Return: 1 if c is letter
 *	o if otherwise
 */

int _isalpha(int c)
{
	int la = 'a';
	int lz = 'z';
	int lA = 'A';
	int lZ = 'Z';

	if (c >= la && c <= lz)
	{
		return (1);
	}
	else if (c >= lA && c <= lZ)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
