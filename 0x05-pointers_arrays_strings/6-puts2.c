#include "main.h"
#include <stdio.h>
/**
* puts2 - prints a string
* @str: string to be tested
*
*/
void puts2(char *str)
{
int count;

for (count = 0; str[count] != '\0'; count++)
{
if((str[count]) % 2 == 0)
{
printf("%c", str[count]);
}
}
printf("\n");
}
