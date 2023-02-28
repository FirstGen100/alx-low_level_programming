#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps 2 numbers with each other
 * @a - the first number
 * @b - the second number
 * return: 0 if successful
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
