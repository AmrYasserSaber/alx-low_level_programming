#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
	{
	int i, left = 0, right = size - 1;

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

		int mid = left + (right - left) / 2;

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
