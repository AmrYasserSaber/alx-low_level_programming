#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *str);

/**
 * _strlen - get the length of string.
 * @str: the string.
 *
 * Return: intrger of the length.
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}

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
	char *my_array;

	if (str == NULL)
		return (NULL);

	my_array = malloc(_strlen(str) * sizeof(char) + 1);

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
