#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @s: pointer to the string
*/
void print_rev(char *s)
{
int count, i, j;
for(count = 0; s[count] != '\0';)
{
count++;
}
i = 0;
while(i < count)
{
j = s[i];
s[i] = s[count];
s[count] = j;
i++;
count--;
}
printf("%s\n", s);
}
