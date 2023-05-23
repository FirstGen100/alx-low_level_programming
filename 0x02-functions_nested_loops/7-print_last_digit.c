#include "main.h"

/**
* print_last_digit - print the last digit
*
* @n: variable
*
* Return: the last digit
*/
int print_last_digit(int n)
{
int l;
l = n % 10;

if (l < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
}
