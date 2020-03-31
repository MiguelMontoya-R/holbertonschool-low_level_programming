#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/uio.h>
/**
 * read_textfile - reads and prints textfile in terminal
 * @filename: filename to be red and printed
 * @letters: buffer size
 * Return: size of the printed text or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, fd1, fd2;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	fd1 = read(fd, buffer, letters);

	if (fd1 == -1)
	{
		free(buffer);
		return (0);
	}

	fd2 = write(STDOUT_FILENO, buffer, fd1);

	if (fd2 < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (fd2);
}
