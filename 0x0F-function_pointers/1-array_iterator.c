#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator-function pointer that run a function on each element of array
 * @array: the aaray we want to iterate on
 * @size: the size of the array
 * @action: the action we want to do in each element of the array
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
