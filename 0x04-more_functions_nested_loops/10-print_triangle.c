#include "main.h"
/**
* print_triangle - prints a triangle
* @size: size of triangle
*/
void print_triangle(int size)
{
	int row, column, c;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (c = row + column; c >= 1; c--)
			_putchar('#');
		_putchar('\n');
	}
}
