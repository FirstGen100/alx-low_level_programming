#include "main.h"

/**
*_memset - fill a block of memory
*@s: starting address of memory to be filled
*@b: constant byte
*@n: number of bytes to be changed
*Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
