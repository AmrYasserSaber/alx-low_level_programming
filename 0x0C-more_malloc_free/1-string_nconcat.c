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
	unsigned int j = 0,len1 = 0,len2 = 0;

	char *my_array;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	my_array = malloc(len1 + n + 1);

	if (!my_array)
		return (NULL);

	for (int i = 0 ; i < len1 ;  i++)
		my_array[i] = s1[i];

	for (j = 0; j < n ; j++)
		my_array[len1 + j] = s2[j];

	my_array[len1 + j] = '\0';

	return (my_array);

}
