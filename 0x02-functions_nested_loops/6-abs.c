#include <stdio.h>
#include <stdlib.h>
/**
* main - 
* return: always 0
*/
int _abs(int);
int main()
{
    int r;
    r = _abs(-1);
    printf("%d \n",r);
    r = _abs(0);
    printf("%d \n",r);
    r = _abs(1);
    printf("%d \n",r);
    r = _abs(-98);
    printf("%d \n",r);

    return 0;
}
/**
* _abs - returns the absolute value of an iteger
* return: return the number
*/
int _abs(int num){

    if (num < 0){
        num = (-1)*num;
    }

    return num;
    }
