#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct types - A new struct type defining a printer.
 * @z: A symbol representing a data type.
 * @f: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct types
{
	char z;
	void (*f)(va_list);
} types_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
