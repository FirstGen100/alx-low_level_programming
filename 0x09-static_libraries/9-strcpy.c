#include<stdio.h>
#include "main.h"
/**
 *_strcpy - copies the string pointed to by src to dest
 *@dest: value
 *@src: value
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
