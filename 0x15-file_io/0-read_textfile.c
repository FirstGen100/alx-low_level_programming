#include "main.h"
/**
 * read_textfile - read and print output
 * @filename: name of file
 * @letters: number of letters to print
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_read, f_write, count = 0;
	FILE *directory;
	char *buffer;

	if (filename == NULL)
		return (0);

	directory = fopen(filename, "r");
	if (directory == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(directory);
		return (0);
	}
	while ((f_read = fread(buffer, sizeof(char), letters, directory)) > 0)
	{
		buffer[f_read] = '\0';
		f_write = write(STDOUT_FILENO, buffer, f_read);
		if (f_write < 0 || f_read != f_write)
		{
			fclose(directory);
			free(buffer);
			return (0);
		}
		count += f_read;
	}
	free(buffer);
	fclose(directory);
	return (count);
}

