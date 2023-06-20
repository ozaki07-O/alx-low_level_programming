#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initialize a variable
 * @d: struct type
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	return;
}
