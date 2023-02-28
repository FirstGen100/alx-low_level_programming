#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @s: pointer to the string
*/
void print_rev(char *s)
{
char temp;
int i, len;
len = strlen(s) - 1;
for(i = 0; i < strlen(s) / 2; i++)
{
temp = s[i];
s[i] = s[len];
s[len--] = temp;
}
printf("%s", str);
}
