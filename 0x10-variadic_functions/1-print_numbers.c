#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints out numbers
 * @seperator: seperates the numbers
 * @n: number to print
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (seperator != NULL && i < (n -1))
			printf("%s", seperator);
	}
	va_end(numbers);
	printf("\n");
}

