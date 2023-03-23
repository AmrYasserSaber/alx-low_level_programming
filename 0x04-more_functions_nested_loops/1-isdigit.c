#include "main.h"
#include <stdio.h>



/**
 *_isdigit - return 1 if it is a number and 0 if not
 *@c: varialbe.
 *Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
