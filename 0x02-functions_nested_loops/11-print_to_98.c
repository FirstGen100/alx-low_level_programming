#include "main.h"

void print_to_98(int n);
/**
 * main - Prints the letters of the alphabet
 * return: 0 if successful
*/
int main()
{
    print_to_98(0);
    _putchar('\n');
    print_to_98(98);
    _putchar('\n');
    print_to_98(111);
    _putchar('\n');
    print_to_98(81);
    _putchar('\n');
    print_to_98(-10);

    return 0;
}
/**
 * print_to_98 - Prints the numbers and ends at 98 
 * @n: the user variable
 * return: 0 if successful
*/
void print_to_98(int n)
{
	if (n < 98){
        for(int x = n; x <= 98; x++){
            _putchar(x + ',');
        }
	}else if(n > 98){
        for(int y = n; y>=98; y--){
           _putchar(y + ',');
        }

        }else{
            _putchar(n);
        }
}
