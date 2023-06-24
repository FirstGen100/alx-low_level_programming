#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints the passed strings
 * @seperator: seperates the strings
 * @n: no of arguments passed
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (seperator != NULL && i < (n - 1))
				printf("%s", seperator);
		}
	}
	va_end(strings);
	printf("\n");
}

