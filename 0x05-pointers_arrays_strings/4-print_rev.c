#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @s: pointer to the string
*/
void print_rev(char *s)
{
int count, i, j;
char rev[100];
count=0;
for(count = 0; s[count] != '\0';)
{
count++;
}
j = count - 1;
for(i = 0; i < count; i++)
{
rev[i] = s[j];
j--;
}
printf("%s", rev);
}
