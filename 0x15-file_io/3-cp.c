#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096
#define PERMISSIONS 0664

int safe_close(int description);
/**
 * main - copies files
 * @argc: number of passed argts
 * @argv: pointer to array argts
 * Return: 1 or exit
 *
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int bytes_read, from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, PERMISSIONS);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from_fd);
		exit(99);
	}
	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to_fd, buffer, bytes_read) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(99);
		}
	}
	if (safe_close(from_fd) < 0)
	{
		exit(100);
	}
	return (0);

}
/**
 * safe_close - closes a file and prints error when closed
 * @description: description error for file
 * Return: 1 or -1
 */
int safe_close(int description)
{
	int error = close(description);

	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);

	return (error);
}
