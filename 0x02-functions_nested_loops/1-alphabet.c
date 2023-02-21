#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabet
*/
void print_alphabet()
{
char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
printf(alphabet,"\n");
}

/**
 * main - Prints the letters of the alphabet
 * return: 0 if successful
*/
int main(void)
{
print_alphabet();
return 0;
}
 
