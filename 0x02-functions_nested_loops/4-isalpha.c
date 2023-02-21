#include <stdio.h>
#include "main.h"

int _isalpha(int c);
/**
* main - 
* return: always 0
*/
int main()
{
    char r = 'c';
    _isalpha(r);
    return 0;
}
/**
* _isalpha - checks if letter is in the aphabet
* return: 1 if in alphabet 0 otherwise
*/
int _isalpha(int c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    }else{
        return 0;
        }

    }
