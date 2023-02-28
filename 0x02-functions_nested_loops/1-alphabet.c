#include <stdio.h>
#include "main.h"

/**
 * main - Prints the letters of the alphabet
 * return: 0 if successful
*/

/**
 * print_alphabet - Prints the letters of the alphabet
*/
void print_alphabet()
{
  char alphabet;
  alphabet = 'a';
  while(alphabet <= 'z')
  {
    _putchar(alphabet);
    alphabet++;
  }
}
