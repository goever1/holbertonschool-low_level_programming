#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - it frees the memory
 * @d: input to be free
 */
void free_dog(dog_t *d)
{
	if (d != NULL && d->name != NULL)
		free(d->name);
	if (d != NULL && d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
