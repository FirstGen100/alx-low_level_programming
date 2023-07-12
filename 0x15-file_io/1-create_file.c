#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1(success) -1(fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file, lenght;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(file, text_content, lenght);

		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(file);
	return (1);
}

