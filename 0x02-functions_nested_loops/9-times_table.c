#include "main.h"
#include <stdio.h>
/**
* times_table - prints the times table of 9 starting with 0
* return: 0 if successful
*/
void times_table(void)
{
int rows, cols;
for (rows = 0; rows <= 9; rows++)
{
for (cols = 0; cols <= 9; cols++)
{
printf("%d, ", rows * cols);
}
printf("\n");
}
}
