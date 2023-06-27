#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_int - pprints int
 * @args: parameters
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints chars
 * @args: parameters
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 *  * print_string - prints strings
 *   * @args: parameters
 *    * Return: void
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_float - prints floats
 * @args: parameters
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints everything
 * @format: the format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *seperator;
	typ_t arguments[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	seperator = "";

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(arguments[j]).format)
			{
				printf("%s", seperator);
				arguments[j].function(list);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

		
