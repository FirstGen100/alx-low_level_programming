#include "main.h"

/**
* _islower - check for lowercase character
*
* @c: The char to be tested
*
* Return: 0 (no lowercase) 1 (char is lowercase)
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
_putchar('\n');
}
