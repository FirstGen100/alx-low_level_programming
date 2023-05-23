#include <stdio.h>
#include "main.h"

/**
* main - Prints natural numbers below 1024 that are multiplies of 3 or 5
*
* Return: 0 (success)
*/
int main(void)
{
int a, sum;

for (a = 1; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
sum += a;
}
printf("%d\n", sum);
return (0);
}
