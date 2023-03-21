#include "main.h"

/**
 * times_table - print a table nine times
 *
 *Return: 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(" ");
			_putchar(i * j);
		}
		_putchar("\n")
	}
}
