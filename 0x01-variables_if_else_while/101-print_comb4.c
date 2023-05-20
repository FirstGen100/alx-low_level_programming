#include <stdio.h>
#include <stdlib.h>

int main(){
    int ones, tens, hundreds;

    for (ones = 0; ones <= 9; ones++)
    {
        for (tens = ones + 1; tens <= 9; tens++)
        {
            for (hundreds = tens + 1; hundreds <= 9; hundreds++)
            {
                if ((ones != tens && (ones != hundreds && (tens != hundreds))))
                {
                    putchar(ones + '0');
                    putchar(tens + '0');
                    putchar(hundreds + '0');
                    if ((ones < 7) || ((i == 7) && (tens < 8)) || ((i == 8) && (tens == 9)))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    return (0);
}
