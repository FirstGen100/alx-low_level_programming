#include "main.h"
#include <stdio.h>
/**
* rev_string - prints string in reverse
* @s: pointer to the string
*/
void rev_string(char *s)
{
int count, i, j;
char rev[10000];
count = 0;
for (count = 0; s[count] != '\0';)
{
count++;
}
j = count - 1;
for (i = 0; i < count; i++)
{
rev[i] = s[j];
j--;
}
printf("%s\n", rev);
}
