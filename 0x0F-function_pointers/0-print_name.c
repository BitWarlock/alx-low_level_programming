#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: name to print.
 * @f: function pointer.
 * Return: nothing.
 */

void	print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
