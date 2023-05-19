#include <stdio.h>

/**
* main - Print all combinations of 3 digits
*
*Return: 0 (success)
*/
int main(void)
{
int ones, tens, hundreds;

for (ones = 0; ones < 8; ones++)
{
for (tens = ones + 1; tens < 9; tens++)
{
for (hundreds = tens + 1; hundreds < 10; hundreds++)
{
// remove duplicate numbers
if ((ones == 0 && tens == 1 && hundreds == 2) ||
(ones == 1 && tens == 0 && hundreds == 2) ||
(ones == 1 && tens == 2 && hundreds == 0) ||
(ones == 2 && tens == 0 && hundreds == 1) ||
(ones == 2 && tens == 1 && hundreds == 0))
continue;
putchar(ones + '0');
putchar(tens + '0');
putchar(hundreds + '0');
if (ones < 7 || tens < 8 || hundreds < 9)
{
putchar(',');
putchar('');
}
}
}
}
putchar('\n');
 
return (0);
}

 
return (0);
}
