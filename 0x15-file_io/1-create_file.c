#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of gile to create
 * @text_content: string to write to file
 * Return: 1(success)
 */
int create_file(const char *filename, char *text_content)
{
	int len, directory;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	directory = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (directory < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != 0)
			len++;
		f_write = write(directory, text_content, len);
		if (f_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(directory);
	return (1);
}

