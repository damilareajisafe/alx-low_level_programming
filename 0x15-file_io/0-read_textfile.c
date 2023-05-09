#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and priints it to the POSIX standard input
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: the number of letters it could read and print or 0 if the file can't
 * be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *c = malloc(letters);
	int rd, wr;

	if (filename == NULL || fd == -1 || c == NULL)
		return (0);

	rd = read(fd, c, letters);
	wr = write(STDOUT_FILENO, c, rd);

	free(c);
	close(fd);

	if (wr == -1)
		return (0);

	return (wr);
}
