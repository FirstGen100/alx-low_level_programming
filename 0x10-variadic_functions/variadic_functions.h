#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct type - structure
 * @format: character
 * @function: associated function
 *
 * Description: structure has the format and associated functions
 */
typedef struct type
{
	char *format;
	void (*function)();
} typ_t;

#endif

