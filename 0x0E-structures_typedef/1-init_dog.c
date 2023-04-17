#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a string containing the dog's name
 * @age: Float value representing the dog's age
 * @owner: Pointer to a string containing the dog's owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

