#include <stdio.h>

/**
* main - print sum of even numbers in fabonicci sequence
*
* Return: 0 (success)
*/
int main(void)
{
int prev_num = 1, curr_num = 2, next_num, total = 0;

while (curr_num <= 4000000)
{
if (curr_num % 2 == 0)
{
total += curr_num;
}

next_num = prev_num + curr_num;
prev_num = curr_num;
curr_num = next_num;
}
printf("%d\n", total);

return (0);
}
