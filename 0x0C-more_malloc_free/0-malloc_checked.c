#include <stdio.h>
#include "main.h"


/**
 * malloc_checked - ceate a space with length b.
 * @b: the length of space it creates.
 *
 * Return: a pointer to the space
 * On error, 98 is returned, and errno is set appropriately.
 */

void *malloc_checked(unsigned int b)
{
	void *my_array;

	my_array = malloc(b);

	if (my_array == NULL)
		exit(98);

	return(my_array);
}

