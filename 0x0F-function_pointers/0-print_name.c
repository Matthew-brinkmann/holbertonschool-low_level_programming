#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - will print a name passed through it.
 * @name: the name to print
 * @f: pointer to function that will be used to print.
 * Description: long description
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
