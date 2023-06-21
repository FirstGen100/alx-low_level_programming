#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: no of arguments
 * @argv: argument vectors
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (argv[2][0])
	{
		case '+':
		case '-':
		case '/':
		case '*':
		case '%':
			result = (*get_op_func(argv[2]))(a, b);
			printf("%d\n", result);
		break;
		default:
			printf("Error\n");
			exit(99);
	}
	return (0);
}

