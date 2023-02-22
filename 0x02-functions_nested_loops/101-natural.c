#include <stdio.h>

/*
 * main - prints the sum of numbers divisible by 3 or 5 between 0 and 1024
 * return: always 0
 */
int main(void)
{
    int n;
    n = 0;

    for (int count=0; count<1024; count++)
    {
        if ((count%3==0) || (count%5==0))
        {
            n = n + count;
        }
        else{
            continue;
        }
    }
    printf("%d is the sum of all numbers divisible by 3 or 5 between 0 and 1024(excluded)\n", n);

    return 0;
}
