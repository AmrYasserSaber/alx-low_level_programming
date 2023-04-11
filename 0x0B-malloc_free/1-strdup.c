#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int strlen(char *str);

/**
 * strlen - get the length of string.
 * @str: the string.
 *
 * Return: intrger of the length.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}




/**
 * _strdup - creates a space and put the string in it.
 * @str: the string.
 *
 * Return: string.
 */

char *_strdup(char *str)
{
	int i = 0;

	char *my_array = malloc(_strlen(str) * sizeof(char));

	if (my_array == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		my_array[i] = str[i];
		i++;
	}

	*(my_array + i) = '\0';

	return (my_array);
}
