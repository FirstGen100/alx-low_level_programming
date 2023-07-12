#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appands text
 * @filename: name of file
 * @text_content: content to append
 * Return: 1(success) -1(fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, res_write, lenght;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		file = open(filename, O_WRONLY | O_APPEND);
		if (file == -1)
			return (-1);
		lenght = 0;

		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(file, text_content, lenght);

		if (res_write == -1)
		{
			close(file);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(file);
	return (1);
}

