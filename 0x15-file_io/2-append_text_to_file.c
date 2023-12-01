#include "main.h"
/**
 * append_text_to_file - append text at end of file
 * @filename: file to open and append
 * @text_content: NULL terminated string to add
 * Return: 1 or -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);

	if (fo < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fo);
		return (1);
	}
	len = strlen(text_content);

	fw = write(fo, text_content, len);
	close(fo);

	if (fw < len)
		return (-1);

	return (-1);
}
