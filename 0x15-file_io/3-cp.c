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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
	int fd_read, res_read, fd_write, res_write;
	char *buf[1024];

	fd_read = open(file_from, O_RDONLY);
	if (fd_read < 0)
		print_error(98, file_from);
	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		close(fd_read);
		print_error(99, file_to);
	}
	do {
		res_read = read(fd_read, buf, 1024);
		if (res_read < 0)
			print_error(98, file_from);
		res_write = write(fd_write, buf, res_read);
		if (res_write < res_read)
			print_error(99, file_to);
	}	while (res_write == 1024);
	if (close(fd_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		close(fd_write);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
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
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

