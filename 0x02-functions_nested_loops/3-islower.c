#include <stdio.h>
#include "main.h"
/**
 * main - Checks if there is a lower character
 * return: always 0
*/
int _islower(int c);
int main()
{
    char r = 'c';
    _islower(r);
    return 0;
}
/**
 * _islower - Checks if there is a lower character
 *@c: the value to be tested
 * return: 1 if c is lowerase and 0 otherwise
*/
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
