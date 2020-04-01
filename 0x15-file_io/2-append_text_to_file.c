#include "holberton.h"
/**
 * append_text_to_file - append text
 * @filename: name of a file
 * @text_content: text content
 * Return: 1 on succed and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, lenght = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[lenght])
		lenght++;

	err = write(fd, text_content, lenght);

	if (err == -1)
		return (-1);

	close(fd);

	return (1);
}
