#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * return: Always 0 if success
*/
void print_alphabet_x10()
{
int count;
count = 1;
while (count <=10)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
