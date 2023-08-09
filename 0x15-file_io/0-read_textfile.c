#include "main.h"
/**
 * read_textfile - read and print output
 * @filename: name of file
 * @letters: number of letters to print
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_read, f_write;
	int directory;
	char *buffer;

	if (filename == NULL)
		return (0);

	directory = open(filename, O_RDONLY);
	if (directory < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	f_read = read(directory, buffer, letters);
	if (f_read < 0)
	{
		free(buffer);
		return (0);
	}
	f_write = write(STDOUT_FILENO, buffer, f_read);
	if (f_write < 0 || f_read != f_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(directory);
	return (f_write);
}

