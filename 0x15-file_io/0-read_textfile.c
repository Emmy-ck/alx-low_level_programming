#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @letters: number of letters to print
 * @filename: text file being read
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w = 0;
	int fd = open(filename, O_RDONLY);

	if (fd != -1)
	{
		char *buf = malloc(sizeof(char) * letters);

		if (buf != NULL)
		{
			ssize_t t = read(fd, buf, letters);

			if (t != -1)
				w = write(STDOUT_FILENO, buf, t);

			free(buf);
		}
		close(fd);
	}
	return (w);
}
