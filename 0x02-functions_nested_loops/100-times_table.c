#include <stdio.h>
#include "main.h"

/*
 * main - prints the times table of 9 starting with 0
 * return: always 0
 */
void print_times_table(int n);
int main(void)
{
    print_times_table(3);

    return 0;
}
/**
* times_table - prints the times table of 9 starting with 0
* return: 0 if successful
*/
void print_times_table(int n)
{
  int cols, rows;
  if ((n>15) || (n<0))
  {
        /* does nothing */
  }
  else
  {
        for (rows=0; rows<=n; rows++)
        {
            for (cols=0; cols<=n; cols++)
            {
                printf("%d, ",(rows*cols));
            }
            printf("\n");
        }
    }
}
