#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabet in lowercase
*/
void print_alphabet(void)
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
