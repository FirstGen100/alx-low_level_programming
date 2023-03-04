#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half a string
* @str: string to be tested
*
*/
void puts_half(char *str)
{
int count, check, i;

for (count=0; str[count] != '\0'; count++);
check = count % 2;
if (check == 0)
{
for (i = (count) / 2; i <= count; i++)
{
printf("%c", str[i]);
}
printf("\n");
printf("\n");
}
else
{
for (i = (count - 1) / 2; i <= count; i++)
{
printf("%c", str[i]);
}
printf("\n");
printf("\n");
}
}
