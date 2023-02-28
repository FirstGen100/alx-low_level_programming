#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints the time starting from 00:00 to 23:59
* return: always 0
*/
void jack_bauer()
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%d",hour / 10);
printf("%d",hour % 10);
printf(":");
printf("%d",minute / 10);
printf("%d",minute % 10);
printf("\n");
}
}
}
