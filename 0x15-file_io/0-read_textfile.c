#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX STDOUT
 * @filename: filename to open
 * @letters: no of letters to read and print
 * Return: no of letters read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *rem;
	int fo, fr, fw;

	if (filename == NULL)
		return (0);
	rem = malloc(letters * sizeof(char));

	if (rem == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo < 0)
	{
		free(rem);
		return (0);
	}
	fr = read(fo, rem, letters);
	if (fr < 0)
	{
		free(rem);
		return (0);
	}
	fw = write(STDOUT_FILENO, rem, fr);
	free(rem);
	close(fo);

	if (fw < 0)
		return (0);

	return ((ssize_t)fw);
}
