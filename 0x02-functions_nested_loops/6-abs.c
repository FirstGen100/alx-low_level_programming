#include "main.h"
#include <stdio.h>
/**
* main - 
* return: always 0
*/
int _abs(int);

int r;

r = _abs(-1);
_putchar('\n' + r);
r = _abs(0);
_putchar('\n' + r);
r = _abs(1);
_putchar('\n' + r);
r = _abs(-98);
_putchar('\n' + r);

/**
* _abs - returns the absolute value of an iteger
* return: return the number's absolute value
*/
int _abs(int num)
{

    if (num < 0)
    {
        num = (-1)*num;
        return num;
    }
    else
    {
        return num;
    }
}
