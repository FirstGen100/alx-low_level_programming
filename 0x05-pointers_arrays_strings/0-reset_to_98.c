#include <stdio.h>
#include "main.h"

/*
 * main - prints the times table of 9 starting with 0
 * return: always 0
 */
void reset_to_98(int *n);
int main(void)
{
    int n;
    n = 402;

    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    return 0;
}
/**
* return_to_98 - prints the times table of 9 starting with 0
* return: 0 if successful
*/
void reset_to_98(int *n)
{
    *n=98;
}
