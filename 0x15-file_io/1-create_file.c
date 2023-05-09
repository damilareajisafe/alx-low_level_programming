#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a string to be written to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	int length = 0, count, i;

	if (filename == NULL || text_content == NULL)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		length++;

	count = write(fd, text_content, length);
	close(fd);

	if (fd == -1 || count == -1)
		return (-1);

	return (1);
}
