#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
	{
	int i, left = 0, right = size - 1, mid = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; ++i)
		{
			printf("%d,", array[i]);
		}
		printf("%d", array[right]);
		printf("\n");

		mid = left + (right - left) / 2;

		if (value == array[mid])
		{
			return (mid);
		} else if (value > array[mid])
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
