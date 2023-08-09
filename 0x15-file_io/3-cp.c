#include "main.h"
/**
 * main - start of program
 * @argc: args count
 * @argv: args
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
/**
 * cp - copy one file to another
 * @file_from: file 1
 * @file_to: file 2
 * Return: void
 */
void cp(char *file_from, char *file_to)
{
	int directory, dir_write;
	int f_write, f_read;
	char *buffer[1024];

	directory = open(file_from, O_RDONLY);
	if (directory < 0)
	{
		print_error(98, file_from);
	}
	dir_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dir_write < 0)
	{
		close(directory);
		print_error(99, file_to);
	}
	do {
		f_read = read(directory, buffer, 1024);
		if (f_read < 0)
			print_error(98, file_from);
		f_write = write(dir_write, buffer, f_read);
		if (f_write < f_read)
			print_error(99, file_to);
	} while (f_write == 1024);
	if (close(directory) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file directory %d\n", directory);
		close(dir_write);
		exit(100);
	}
	if (close(dir_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file directory %d\n", dir_write);
		exit(100);
	}
}
/**
 * print_error - prints the errors
 * @err: error number
 * @filename: name of file
 * Return: void
 */
void print_error(int err, char *filename)
{
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(99);
	}
}

