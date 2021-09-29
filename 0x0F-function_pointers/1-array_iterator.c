#include "function_pointers.h"

/**
 * array_iteraror- Executes a function given as a parameter
 *	on each element of an array
 * @array: The array
 * @size: Size of array
 * @action: Pointer to function in need of use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for(int i = 0;i < size;i++)
	{
		action(array[i]);
	};
}
