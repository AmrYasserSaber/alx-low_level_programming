#include "main.h"
#include <math.h>
/**
 * set_bit - set a bit to 1
 * @n: number
 * @index: the index of the bit
 * Return: the value of the new number.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (0);
	*n |= 1 << index;
	return (*n);
}
