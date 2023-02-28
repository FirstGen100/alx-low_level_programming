#include <stdio.h>
#include "main.h"
/**
 * main - Prints the alphabet 10 times
 * return: Always 0 if success
*/
int main()
{
int i;
for (i=0; i<=9; i++)
{
void print_alphabet_x10();
printf("\n");
}
return 0;
}
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * return: Always 0 if success
*/
void print_alphabet_x10()
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
}
