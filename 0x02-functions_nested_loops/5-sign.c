#include <stdio.h>
#include <stdlib.h>
/**
* print_sign - prints whether a number is positive, 0 or negative
* @n: The number to be tested
* return: always 0
*/
int print_sign(int n)
{
if (n > 0)
{
printf("+ \n");
return (1);
}
else if (n == 0)
{
printf("0 \n");
return (0);
}
else
{
printf("- \n");
return (-1);
}
}
