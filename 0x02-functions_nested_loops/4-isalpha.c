#include "main.h"

/**
* _isalpha - check for the alphabet
*
* @c: variable to be tested
*
* Return: 0 (not alphabet) 1 (alphabet)
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
_putchar('\n');
}
