#include <stdio.h>
#include <ctype.h>

/**
 *_islower - check if its lower case or not.
 *@c: the character to check
 * Return: 1 or 0.
 */

int _islower(char c)
{
return (c >= 97 && c <= 122);
}
