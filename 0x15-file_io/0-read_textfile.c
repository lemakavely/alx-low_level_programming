#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: filename to be read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len0, len1;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	len0 = read(fd, buf, letters);
	close(fd);
	if (len0 == -1)
	{
		free(buf);
		return (0);
	}
	len1 = write(STDOUT_FILENO, buf, len0);
	free(buf);
	if (len1 != len0)
		return (0);
	return (len0);
}
