#include "holberton.h"
/**
 * create_file - create a file with specific permissions
 * @filename: name of the file
 * @text_content: content of the text file
 * Return: 1 succed, -1 failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, err, lenght = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[lenght] && *(text_content + lenght))
		lenght++;

	err = write(fd, text_content, lenght);
	if (err == -1)
		return (-1);

	close(fd);
	return (1);
}
