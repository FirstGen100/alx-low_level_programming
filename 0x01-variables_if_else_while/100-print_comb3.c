#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
int first;
int second;

for (second = 0; second <= 9; second++)
{
for (first = second + 1; first <= 9; second++)
{
putchar(first + '0');
putchar(second, first)

if (second < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
