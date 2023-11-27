#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: number of letters to read
 *
 * Return: letters number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file);
	return (bytes);
}
