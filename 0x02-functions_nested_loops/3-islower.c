#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if there is a lower character
 * @c: the value to be tested
 * Return: (0) if no lowercase letters are present and (1) otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
