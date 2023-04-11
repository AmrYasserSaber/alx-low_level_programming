#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a dynamic array.
 * @size: the szize of the array.
 * @c: the value to populate the array with.
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *my_array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (my_array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		*(my_array + i) = c;
		i++;
	}

	*(my_array + i) = '\0';

	return (my_array);

}
