#include <stdarg.h>
#include <stdlib.h>
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
	int file_from, read_from, file_to, write_to, cle_t, cle_f;
	char buffer[1024], err[] = "Error: Can't read from file";
	char erw[] = "Error: Can't write to";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", err, argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while (read_from > 0)
	{
		read_from = read(file_from, buffer, 1024);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", err, argv[1]);
			exit(98);
		}
		write_to = write(file_to, buffer, read_from);
		if (file_to == -1 || write_to == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", erw, argv[2]);
			exit(99);
		}
	}
	cle_t = close(file_from);
	cle_f = close(file_to);
	if (cle_t == -1 || cle_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (1);
}
