#include <stdio.h>

/**
* main - prints the first 98 fibonacci numbers
*
* Return: 0 (success)
*/
int main(void)
{
long num1 = 1, num2 = 2, next, count;

printf("%ld, %ld, ", num1, num2);

for (count = 3; count <= 50; count++)
{
next = num1 + num2;
printf("%ld", next);

if (count < 50)
{
printf(", ");
}

num1 = num2;
num2 = next;
}
printf("\n");

return (0);
}
