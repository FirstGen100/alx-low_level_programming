#include <stdio.h>
/**
 * main - print the name of the file compiled from
 * Return: 0(success)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

