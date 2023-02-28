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
for (x = n; x <= 98; x++)
{
printf("%d", x);
if (98 - x != 0)
{
printf(", ");
}
}
}
else if (n > 98)
{
for (y = n; y >= 98; y--)
{
printf("%d", y);
if (y - 98 != 0)
{
printf(", ");
}
}
}
else
{
printf("%d ", n);
}
}
