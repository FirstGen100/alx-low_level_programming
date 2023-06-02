#include "main.h"

/**
* more_numbers - print 0-14 ten times
*/

void more_numbers(void)
{
char c;
int count = 10;

while (count != 0)
{
for (c = '0'; c <= '14'; c++)
{
_putchar(c);
}
_putchar('\n');
count --;
}
}
