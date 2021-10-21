#include "main.h"

/**
 * read_textfile- Reads a text file and prints it
 *	to the POSIX standard output
 * @filename: the path of the file to be read
 * @letters: no of letters it should
 *	read and write
 *
 * Return: actual no it could r&w
 *	0 if filename is null
 *	0 if cant be opened and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free (c);
		return (0);
	}

	int r = read(fd, c, letters);

	if (r < 0)
	{
		free (c);
		return (0);
	}

	ssize_t w = write(1, c, r);

	if (w < 0)
	{
		free(c);
		return (0);
	}
	close (fd);
	return (w);
}
