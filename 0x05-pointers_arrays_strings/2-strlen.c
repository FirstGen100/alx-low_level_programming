#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the pointer to the string
 * return: the number of letters in the array
*/
int _strlen(char *s)
{
int count;
s = &s;
for (count = 0; s[count] != '\0'; count++)
{
printf("%d", count);
}
return (count);
}
