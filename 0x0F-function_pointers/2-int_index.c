#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  int_index-function pointer that run a function on each element of array
 * @array: the aaray we want to iterate on
 * @size: the size of the array
 * @cmp: pointer to function that compar the value
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	}
	return (-1);
}
