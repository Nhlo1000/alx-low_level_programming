#include "main.h"
#include <stdlib.h>

/**
 * @letters: amount of letters that has to be read
 * @filename: a txt file being read
 * read_txtfile: read txt file print to STDOUT.
 * Return: w- the exact num of bytes read and written
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

