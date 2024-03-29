#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: Pointer to name of a file
 * @letters: The number of letters that the function should
 *           read and print
 * Return: If function fails or filename is NULL -> 0
 *         O/w - the actual number of bytes the function
 *         can print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
