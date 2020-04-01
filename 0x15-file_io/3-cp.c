#include <stdarg.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copy file_from file_to
 * @argc: counter of arguments given
 * @argv: arguments vector (string)
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, fd2, fd3, fd4, fd5;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = read(fd, buffer, 1024);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fd3 = write(fd2, buffer, fd1);
	if (fd3 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fd4 = close(fd);
	if (fd4 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd4);
		exit(100);
	}

	fd5 = close(fd2);
	if (fd5 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd5);
		exit(100);
	}
	return (1);
}
