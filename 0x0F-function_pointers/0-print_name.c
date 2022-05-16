#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string char type
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
