#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for
 * an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: element
 * @size : number of bite
 *
 * Return: pointer to the resulting string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	*my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(nmemb));

	if (!my_array)
		return (NULL);

	for (i = 0; i < size; i++)
		my_array[i] = 0;
}

