#ifndef MAIN
#define MAIN
#include <stdio.h>
#include<stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: lenght of string
 * @next: points to next node
 *
 * Description: singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif/*MAIN*/

