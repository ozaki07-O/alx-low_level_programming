#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intializes variables
 * @d: structure name
 * @name: name
 * @age: years old
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
