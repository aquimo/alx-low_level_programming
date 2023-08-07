#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads the text of the file print to the STDOUT
 * @filename: Is text file that is being read on STDOUT
 * @letters: Set the num of letters to be read on STDOUT
 * Return: the w- represents actual number of bytes to read 
 * and print 0 when function get error or filename is NULL.
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
