#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
*
* Return: 0 (success)
*/
int main(void)
{
int n = 50, first = 1, second = 2, next, i;
printf("%d %d ", first, second);

for (i = 2; i < n; i++)
{
next = first + second;
printf("%d ", next);
first = second;
second = next;
}
printf("\n");

return (0);
}
