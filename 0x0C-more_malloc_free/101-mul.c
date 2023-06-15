#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
* main - multiply two numbers
* @ argc: number of args
* @argv: arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, carry, len1, len2, len_res, res_index;
	int *res;
	char *num1, *num2;

	if(argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];
	len1 = strlen(num1);
	len2 = strlen(num2);

	for (i = 0; i < len1; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < len2; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	len_res = len1 + len2;
	res = calloc(len_res, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 -1; j >= 0; j--)
		{
			res_index = len1 + len2 - i - j - ;
			res[res_index] += (num[i] - '0') * (num2[j] - '0' + carry;
			carry = res[res_index] / 10;
			res[res_index] %= 10;
		}
		res_index = len1 + len2 - i - j - 2;
		while (carry)
		{
			res_index++;
			res[res_index] += carry;
			carry = res[res_index] / 10;
			res[res_index] %= 10;
		}
	}
	res_index = len_res - 1;
	while (res_index > 0 && res[res_index] == 0)
		res_index--;
	for (i = res_index; i >= 0; i--)
		printf("%d", res[i]);
	printf("\n");
	free(res);
	return (0);
}
