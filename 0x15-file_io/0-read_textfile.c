#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txt fil print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printe 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t we;
ssize_t it;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	it = read(fd, buf, letters);
	we = write(STDOUT_FILENO, buf, it);
	free(buf);
	close(fd);
	return (we);
}
