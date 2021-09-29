#include "function_pointers.h"

/**
 * int_index- Searches for an integer
 * @array: Array with integer
 * @size: no of elements in array
 * @cmp: A pointer to function used to compare 
 *	values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	cmp(*array);
	if (cmp(*array) == 0)
		return -1;
}
