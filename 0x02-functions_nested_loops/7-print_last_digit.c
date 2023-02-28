#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @num: the number to be tested
* Return: return the number
*/
int print_last_digit(int num)
{
if (num < 0)
{
num = (-1) * num;
_putchar((num % 10) + '0');
return (num);
}
else
{
_putchar((int)(num % 10));
return (num);
}
}
