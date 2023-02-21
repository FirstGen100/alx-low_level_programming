#include <stdio.h>
#include <stdlib.h>

int _islower(int c);

int main()
{
    char r = 'c';
    _islower(r);
    return 0;
}

int _islower(int c){

    if (c >= 'a' && c <= 'z'){
        printf("1 \n");
    }else{
        printf("0 \n");
        }

    }
