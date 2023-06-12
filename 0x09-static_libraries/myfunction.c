#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* _islower - check for lowercase character
*
* @c: The char to be tested
*
* Return: 0 (no lowercase) 1 (char is lowercase)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
/**
* _isalpha - check for the alphabet
*
* @c: variable to be tested
*
* Return: 0 (not alphabet) 1 (alphabet)
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
/**
* _abs - print the absolute value of an integer
*
* @n: variable to be tested
*
* Return: absolute value of n
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
/**
* _isupper - checks for uppercase character
* @c: Variable
* Return: 0(no uppercase) 1(uppercase letter)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
/**
* _isdigit - function that check if it's a digit
* @c: takes in a character/digit
* Return: 1 if digit and 0 if anything else
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
/**
* _strlen - returns the length of a string..
* @s: value to be evaluate.
* Return: void
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * _puts - prints a string to stdout
 * @str: value to be evaluate.
 * Return: void
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
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
int _atoi(char *s)
{
}
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
/**
 * _strcmp - compare two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/**
*_memset - fill a block of memory
*@s: starting address of memory to be filled
*@b: constant byte
*@n: number of bytes to be changed
*Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
/**
*_memcpy - copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character we're looking for
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
}
/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
/**
 * _strstr - a function that locates a substring
 * @haystack: string pool
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
