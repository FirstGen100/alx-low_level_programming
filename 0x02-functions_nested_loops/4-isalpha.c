#include <stdio.h>
#include <stdlib.h>

int _isalpha(int c);

int main()
{
    char r = 'c';
    _isalpha(r);
    return 0;
}

int _isalpha(int c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("1 \n");
    }else{
        printf("0 \n");
        }

    }
