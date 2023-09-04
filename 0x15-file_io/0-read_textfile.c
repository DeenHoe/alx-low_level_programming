#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function name
 * @filename: the name of the file
 * @letters: the size
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t fd;
	ssize_t a;
	ssize_t d;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	d = read(fd, bufer, letters);
	a = write(STDOUT_FILENO, bufer, d);

	free(bufer);
	close(fd);

	return (a);
}
