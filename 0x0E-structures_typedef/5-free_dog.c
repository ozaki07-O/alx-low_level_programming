#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees struct
 * @d: struct type
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
