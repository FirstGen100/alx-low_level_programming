#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints out opcodes in hexa
 * @start: start of count
 * @bytes: no of bytes needed
 * Return: void
 */
void print_opcodes(unsigned char *start, size_t bytes)
{
	for (size_t i = 0; i < bytes; i++)
	{
		printf("%02x", start[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	size_t bytes = atoi(argv[1]);
	unsigned char *start = (unsigned char*) main;
	print_opcodes(start, bytes);
	return (0);
}

