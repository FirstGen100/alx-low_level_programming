#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions"

/**
 * print_int - prints integers
 * @list: argument list
 * @seperator: seperator
 * Return: void
 */
void print_int(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}
/**
 * print_char - prints characters
 * @list: arguments
 * @seperator: seperator
 * Return: void
 */
void print_char(va_list list, char *seperator)
{
	printf("%s%c", seperator, va_arg(list, int));
}
/**
 * print_string - prints strings
 * @seperator: seperator
 * @list: prints lists
 * Return: void
 */
void print_string(va_list list, char *seperator)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", seperator, s);
}
/**
 * print_floats - prints float numbers
 * @seperator: seperator
 * @list: list of items
 * Return: void
 */
void print_floats(va_list list, char *seperator)
{
	printf("%s%f", seperator, va_arg(list, double));
}
/**
 * print_all - prints everything
 * @format: list of all arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *seperator;
	int i, j;
	fm_t fm[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{NULL, NULL}
	};
	va_start(list, format);
	i = 0;
	seperator = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(list, seperator);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

