#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints the numbers and ends at 98 
 * @n: the user variable
 * return: 0 if successful
*/
void print_to_98(int n)
{
int x, y;
if (n < 98)
{
for(int x = n; x <= 98; x++)
{
_putchar(x + ',');
}
}
else if(n > 98)
{
for(int y = n; y>=98; y--)
{
_putchar(y + ',');
}
}
else
{
_putchar(n);
}
}
