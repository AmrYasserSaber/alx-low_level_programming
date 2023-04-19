#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name -prints a name acording to the function passed in the parameters
 * @name: name of the person
 * @f: pointer to the function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!f)
		return;
	f(name);
}
