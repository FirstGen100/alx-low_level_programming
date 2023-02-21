#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main()
{
    int n;
    n = add(89,9);
    printf("%d \n",n);

    return 0;
}

int add(int x, int y)
{
	return (x + y);
}
