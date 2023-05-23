#include "main.h"

/**
* main - Print _putchar
*
* Return: 0 (Success)
*/

int main(void)
{
int i;
char p[] = "_putchar";

for (i = 0; i < 7; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
