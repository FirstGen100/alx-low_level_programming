#include <stdio.h>
#include "main.h"
/**
* _isalpha - checks if letter is in the aphabet
* @c: the value to be tested
* Return: 1 if in alphabet 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
