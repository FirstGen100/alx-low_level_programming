#include <stdio.h>
#include <stdlib.h>

int print_last_digit(int);


int main()
{
    int r;
    r = print_last_digit(98);
    printf("%d \n",r);
    r = print_last_digit(0);
    printf("%d \n",r);
    r = print_last_digit(-1024);
    printf("%d \n",r);

    return 0;
}

int print_last_digit(int num){

    if (num < 0){
        num = (-1)*num;
        num = num % 10;
    }else{
        num = num % 10;
        }

    return num;
    }
