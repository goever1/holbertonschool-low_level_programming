#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - it frees the memory
 * @d: input to be free
 */
void free_dog(dog_t *d)
{
	id (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
