#include <stdio.h>
#include <stdlib.h>

void print_to_98(int n);

int main()
{
    print_to_98(0);
    printf("\n");
    print_to_98(98);
    printf("\n");
    print_to_98(111);
    printf("\n");
    print_to_98(81);
    printf("\n");
    print_to_98(-10);

    return 0;
}

void print_to_98(int n)
{
	if (n < 98){
        for(int x = n; x <= 98; x++){
            printf("%d, ",x);
        }
	}else if(n > 98){
        for(int y = n; y>=98; y--){
           printf("%d, ",y);
        }

        }else{
            printf("%d ",n);
        }
}
