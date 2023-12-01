#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 or -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
