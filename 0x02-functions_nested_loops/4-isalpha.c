#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - check if its a letter.
 *@c: the character to check
 * Return: 1 or 0.
 */

int _isalpha(char c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
