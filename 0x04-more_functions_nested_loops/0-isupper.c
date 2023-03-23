#include "main.h"
#include <stdio.h>

/**
 *_isupper - return if its upper case or not.
 *@c: varialbe.
 *Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
