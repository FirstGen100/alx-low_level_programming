#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%d", digit);
	putchar('\n');

	return (0);
}
