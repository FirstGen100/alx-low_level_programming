#include <stdio.h>
#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: the pointer to the string
 * return: the number of letters in the array(count)
*/
int _strlen(char *s)
{
int count;
for (count = 0; s[count] != '\0';)
{
count++;
}
printf("%d", count);
return (count);
}
