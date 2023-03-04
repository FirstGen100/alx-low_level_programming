#include "main.h"
#include <stdio.h>
/**
* print_array - prints numbers in an array
* @a: array to be tested
* @n: the number of elements to be printed
*/
void print_array(int *a, int n)
{
int i;
for(i=a[n]; a[i] != '\0'; i++)
{
printf("%d, ", a[i]);
}
}
