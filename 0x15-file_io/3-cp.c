#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Filename
 * @text_content: Added content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int wr;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		wr = write(f, text_content, n);
		if (wr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
