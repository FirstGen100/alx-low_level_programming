#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
*
* Return: 0 (success)
*/
int main(void)
{
long num1 = 1, num2 = 2, next, count, sum;

printf("%ld, %ld, ", num1, num2);

for (count = 3; count <= 50; count++)
{
next = num1 + num2;
printf("%ld", next);

if (next < 4000000)
{
sum = 2;
if (next % 2 == 0)
{
sum += next;
}
else
{
break;
}
}
num1 = num2;
num2 = next;
}
printf("%ld\n", sum);

return (0);
}
