#include "main.h"
#include <stdio.h>
/**
* puts2 - prints a string
* @str: string to be tested
*
*/
void puts2(char *str)
{
int count, check;

for (count = 0; str[count] != '\0'; count++)
{
check = count % 2;
if (check == 0)
{
printf("%c", str[count]);
}
}
printf("\n");
}
