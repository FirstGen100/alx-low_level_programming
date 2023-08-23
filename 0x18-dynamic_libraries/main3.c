#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string pool
 * @needle: substring to locate
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
 * _atoi - function
 * @s: variable
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
/**
 * _strspn - function
 * @s: variable characters
 * @accept: acceptable chars
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	char *a;
	size_t count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
			return (count);
	}

	return (count);
}

