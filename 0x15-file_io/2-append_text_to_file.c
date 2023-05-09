#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to be appended to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int length = 0, count, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL && fd == -1)
		return (-1);
	else if (text_content == NULL && fd > 0)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		length++;

	count = write(fd, text_content, length);

	close(fd);

	if (count == -1)
		return (-1);

	return (1);
}
