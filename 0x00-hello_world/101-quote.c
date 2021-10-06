#include <unistd.h>

/**
 * main- Prints a string
 *
 * Return: Always one
 */

int main()
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
