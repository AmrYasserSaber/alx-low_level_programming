#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1
 * if value is not present in array or if array is NULL
 * Description: prints every value checked
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}
if (size == 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (array[i] == value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
return (i);
}
else
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}
}
return (-1);
}
