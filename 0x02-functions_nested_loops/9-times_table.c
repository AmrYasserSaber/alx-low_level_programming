#include "main.h"
#include <stdio.h>
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
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				printf(" %d,", i * j);
			}
			else if(j==9)
			{
				printf("%3d", i * j);
			}
			else
			{
				printf("%3d,", i * j);
			}
		};
		printf("\n");
	}
}
