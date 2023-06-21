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
<<<<<<< HEAD
		free(d->age);
=======
>>>>>>> e2665424224646b28600bf5d9f8094f1aea036c1
		free(d->owner);
		free(d);
	}
}
