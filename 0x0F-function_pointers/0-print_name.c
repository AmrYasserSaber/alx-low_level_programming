#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -prints a name acording to the function passed in the parameters
 * @name: name of the person
 * @f : a pointer function
 *
 * Return: Nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
