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
	/*int i;*/

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
