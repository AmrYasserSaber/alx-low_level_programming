#include "main.h"

/**
 *print_square - function that prints a square, followed by a new line .
 *@size: the number of hashes in height in width
 *Return: void.
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}

}
