#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: Variable
* Return: 0(no uppercase) 1(otherwise).
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
