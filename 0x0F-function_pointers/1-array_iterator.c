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
	if (!array || !size || !action)
		return;
	for (unsigned int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
