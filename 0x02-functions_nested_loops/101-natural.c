#include <stdio.h>
#include "main.h"

/*
 * main - prints the sum of numbers divisible by 3 or 5 between 0 and 1024
 * Return: always 0
 */
int main(void)
{
int n, count;
n = 0;
for (count = 0; count < 1024; count++)
{
if ((count % 3 == 0) || (count % 5 == 0))
{
n = n + count;
}
else
{
continue;
}
}
printf("%d\n", n);

return (0);
}
