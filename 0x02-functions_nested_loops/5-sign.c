#include <stdio.h>
#include <stdlib.h>
/**
* print_sign - prints whether a number is positive, 0 or negative
* @n: The number to be tested
* Return: (1) if n greater than 0 (0) if equal to 0 and (-1) if less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
printf("+1 \n");
return (1);
}
else if (n == 0)
{
printf("00 \n");
return (0);
}
else
{
printf("-1 \n");
return (-1);
}
}
