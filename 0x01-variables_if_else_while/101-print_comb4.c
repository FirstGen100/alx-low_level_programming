#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
int tens;
int ones;
int hundreds;

for (tens = 0; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
for (hundreds = ones + 1; hundreds <= 10 hundreds++)
{
putchar(tens + '0');
putchar(ones + '0');
putchar(hundreds + '0');
if (tens < 8)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
