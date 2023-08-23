#include "main.h"
/**
 * _putchar - write characters
 * @c: the character
 * Return: chars
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - check for lowercase character
 * @c: The char to be tested
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
 * @c: variable to be tested
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
 * @n: variable to be tested
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

