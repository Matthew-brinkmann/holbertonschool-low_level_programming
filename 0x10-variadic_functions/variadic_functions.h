#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct forms - holds my selector and pointer to function
 * @symbol: selector type, i=int, c=char, f=float, s=string
 * @type: pointer to function to print statement
 *
 * Description:
 */
typedef struct forms
{
	char *symbol;
	void (*type)(va_list *);
} t_forms;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
