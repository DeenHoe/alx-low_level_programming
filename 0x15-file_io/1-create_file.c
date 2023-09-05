#include "main.h"
/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string to write.
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, a, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, length);

	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return (1);
}
