#include <stdio.h>
/**
*main - start
*@argc: number of args
*argv: pointer to argument string
*Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
