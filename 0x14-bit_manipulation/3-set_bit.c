#include "main.h"
#include <math.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (0);
	*n |= 1 << index;
	return (*n);
}
