#include <stdlib.h>
#include <stdio.h>
/**
*main - start
*@argc: no of arguments
*@argv: pointer to strings
*Return: number of coins
*/
int main(int argc, char *argv[])
{
	int amount, coins;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	coins = 0;
	if (amount > 25)
	{
		while (amount >= 5)
		{
			amount -= 25;
			coins++;
		}
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
		{
			amount -= 10;
			coins++;
		}
	}
	if (amount > 5 && amount < 10)
	{
		while (amount > 2)
		{
			amount -= 2;
			coins++;
		}
	}
	if (amount > 2 && amount < 5)
	{
		while (amount > 2)
		{
			amount -= 2;
			coins++;
		}
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
