#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * checker - read file
 * @e: error index
 * @filename: name of file
 * Return: void
 */
void checker(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * file_copy - copy file contents
 * @filename: source file
 * @new_file: destination file
 * Return: 1(success) -1(fail)
 */
void file_copy(char *filename, char *new_file)
{
	int file_read, res_read, file_write, res_write;
	char *buffer[1024];

	file_read = open(filename, O_RDONLY);
	if (file_read < 0)
		checker(98, filename);
	file_write = open(new_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_write < 0)
	{
		close(file_read);
		checker(99, new_file);
	}

	do {
		res_read = read(file_read, buffer, 1024);

		if (res_read < 0)
			checker(98, filename);
		res_write = write(file_write, buffer, res_read);

		if (res_write < res_read)
			checker(99, new_file);
	}	while (res_write == 1024);

	if (close(file_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_read);
		close(file_write);
		exit(100);
	}
	if (close(file_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_write);
		exit(100);
	}
}
/**
 * main - entry
 * @argc: argument count
 * @argv: argument values
 * Return: 0(success) -1(fail)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_copy filename new_file\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	return (0);
}

