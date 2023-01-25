#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include<stdio.h>
#include<stdarg.h>

/**
 * struct printer - a new strust type defining a printer
 * @symbol: a symbol representing a data type
 * @print: a function pointer to afunction
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* _VARIADIC_FUNCTIONS_H_ */
