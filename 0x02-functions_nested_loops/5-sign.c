#include <stdio.h>
#include <stdlib.h>
/**
* main - 
* return: always 0
*/
int print_sign(int n);
int main()
{
    int r = -2;
    print_sign(r);
    return 0;
}
/**
* print sign - 
* return: always 0
*/
int print_sign(int n){

    if (n > 0){
        printf("+ \n");
        return 1;
    }else if (n == 0){
        printf("0 \n");
        return 0;
        }
    else{
        printf("- \n");
        return -1;
    }

    }
