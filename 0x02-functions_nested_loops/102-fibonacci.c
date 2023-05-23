#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
*
* Return: 0 (success)
*/
int main(void)
{
unsigned int n = 50, first = 1, second = 2, next, i;

printf("%u %u, ", first, second);

for (i = 2; i < n; i++)
{
next = first + second;
if (i != n - 1)
{
printf("%u, ", next);
}
else
{
printf("%u ", next);
}
first = second;
second = next;
}

printf("\n");
return (0);
}
