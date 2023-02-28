#include <stdio.h>
#include <stdlib.h>
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
num = num % 10;
_putchar(num);
return (num);
}
else
{
num = num % 10;
_putchar(num);
return (num);
}
}
