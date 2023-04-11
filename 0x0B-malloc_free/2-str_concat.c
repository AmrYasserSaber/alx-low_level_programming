#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatnate two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: contatnated string.
 */

char *str_concat(char *s1, char *s2)
{

int i = 0, j = 0, len1 = 0, len2 = 0;

char *my_array;

while (s1[len1])
{
len1++;
}

while (s2[len2])
{
len2++;
}

if (s1 == NULL || s2 == NULL)
return (NULL);

my_array = malloc((len1 + len2 + 1) * sizeof(char));

if (my_array == NULL)
{
return (NULL);
}

while (s1[i])
{
my_array[i] = s1[i];
i++;
}

while (s2[j])
{
my_array[i + j] = s2[j];
j++;
}

*(my_array + i + j) = '\0';

return (my_array);
}
