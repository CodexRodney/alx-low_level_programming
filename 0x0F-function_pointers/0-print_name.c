#include "function_pointers.h"

/**
 * print_name- Prints name
 * @name: Name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
