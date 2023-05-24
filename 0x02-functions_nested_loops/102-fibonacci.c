#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
*
* Return: 0 (success)
*/
int main()
{
int num1 = 1, num2 = 2, next, count;
    
printf("%d, %d, ", num1, num2);
    
for(count = 3; count <= 50; count++)
{
next = num1 + num2;
printf("%d", next);
        
if(count < 50)
{
printf(", ");
}
        
num1 = num2;
num2 = next;
}
    
printf("\n"); // add a newline at the end
    
return 0;
}
