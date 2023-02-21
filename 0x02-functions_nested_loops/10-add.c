#include <stdio.h>
#include <stdlib.h>

int add(int, int);
/**
 * main - Prints the letters of the alphabet
 * return: 0 if successful
*/
int main()
{
int n;
n = add(89,9);
printf("%d \n",n);

return 0;
}
/**
 * add - Adds two numbers
 *@x: first number
 *@y: second number
 */
int add(int x, int y)
{
	return (x + y);
}
