#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - copies the content of a file to another
 * @ac: arguments count
 * @av: address of the pointer to the arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int fdfrom, fdto, rdcount, wrcount;
	char *buffer = malloc(1024);

	if (buffer == NULL)
		return (-1);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	fdfrom = open(av[1], O_RDONLY);
	rdcount = read(fdfrom, buffer, 1024);
	wrcount = write(fdto, buffer, rdcount);

	if (fdfrom == -1 || rdcount == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fdto == -1 || wrcount == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	free(buffer);

	return (0);
}
