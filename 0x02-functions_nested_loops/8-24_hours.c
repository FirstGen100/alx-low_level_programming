#include <stdio.h>
#include <stdlib.h>

void jack_bauer();


int main()
{
    jack_bauer();

    return 0;
}

void jack_bauer(){

	for (int hour = 0; hour < 24; hour++){

		for (int minute = 0; minute < 60; minute++){
			printf("%d",hour/10);
			printf("%d",hour%10);
			printf(":");
			printf("%d",minute/10);
			printf("%d",minute%10);
			printf("\n");
		}
	}
}
