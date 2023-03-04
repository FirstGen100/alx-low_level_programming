#include "main.h"
#include <stdio.h>
/**
* rev_string - prints string in reverse
* @s: pointer to the string
*/
void print_rev(char *s)
{
char temp;

int leng, g, count;
count = 0;
for(leng=0; s[leng] != '\0';)
{
    leng++;
}
// iterate through each and every character of the string for printing it backwards or reverse direction

for(g = (leng-1); g >= 0; g--)
{
    if(count < (leng)/2)
    {
        temp = s[count];
        s[count] = s[g];
        s[g] = temp;
        count++;
    }
}
}
