#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabet in lowercase
*/
void print_alphabet()
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
}
