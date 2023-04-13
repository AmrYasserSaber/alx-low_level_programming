#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat two strings
 * @s1:first string
 * @s2:second string
 * @n:number of characters from string 2
 *
 * Return: a pointer to the concatnated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int j;
	char *my_array;

	while (*s1)
		len1++;

	while (*s2)
		len2++;

	if (n > len2)
		n = len2;

	my_array = malloc(len1 + n);

	if (my_array)
		return (NULL);

	for (int i = 0 ; i < len1 ;  i++)
		my_array[i] = s1[i];

	for (j = 0; j < n ; j++)
		my_array[len1 + j] = s2[j];

	my_array[len1 + j] = '\0';

	return (my_array);

}
