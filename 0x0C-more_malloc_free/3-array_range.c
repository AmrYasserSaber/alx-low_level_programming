#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *my_array = malloc(max - min + 1);

	if (!my_array)
		return (NULL);

	for (int i = min; i <= max; i++)
		my_array[min - i] = i;

	return (my_array);
}
