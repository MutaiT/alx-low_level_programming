#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 *         0 if the file can not be opened or read
 *         0 if write fails or does not write the expected amount of bytes
 *         0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t l, len;
	char *c;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		close(f);
		return (0);
	}
	l = read(f, c, letters);
	close(f);
	if (l == -1)
	{
		free(c);
		return (0);
	}
	len = write(STDOUT_FILENO, c, l);
	free(c);
	if (l != len)
		return (0);
	return (len);
}
