#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: struct referrence.
 *
 * Return: void
 */
void free_dog(struct dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
