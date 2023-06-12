#include <unistd.h>
#include "main.h"

/**
* _putchar - write function
* @c: character
* Return: character(s)
*/
int _putchar(char c)
{
        return write(1, &c, 1);
}
