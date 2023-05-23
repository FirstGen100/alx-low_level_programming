#include "main.h"

/**
* print_sign - print the sign of a number
*
* @n: variable to be tested
*
* Return: 1 (> 0) 0 (= 0) -1 (< 0)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);
}
_putchar('\n');
}
