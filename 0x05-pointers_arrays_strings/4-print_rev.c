#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @s: pointer to the string
*/
void print_rev (char *s)
{
int i, count, k;
char *a, temp;

a = s;

while (s[count] != '\0')
{
		count++;
}

for (k = 1; k < count; k++)
{
		a++;
}

for (i = 0; i < (count / 2); i++)
{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
}
}
