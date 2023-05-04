#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the unber in binary
 * @n: unsigned long int
 *
 */

void print_binary(unsigned long int n)
{
	int counter = 0;
	unsigned long int *list =
	(unsigned long int *)malloc(sizeof(unsigned long int) * n);
	if (n == 0)
		printf("%d", 0);
	while (n > 0)
	{
		*list = n % 2;
		n /= 2;
		list++;
		counter++;
	}
	while (counter)
	{
		printf("%ld", *(--list));
		counter--;
	}
	free(list);
}
