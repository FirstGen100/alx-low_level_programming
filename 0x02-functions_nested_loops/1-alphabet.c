#include <stdio.h>
#include "main.h"

/**
 * main - Prints the letters of the alphabet
 * return: 0 if successful
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return 0;
}
/**
 * print_alphabet - Prints the letters of the alphabet
*/
void print_alphabet()
{
for(char a = 'a'; a <= 'z'; a++)
{
  _putchar(a);
  _putchar('\n');
}
