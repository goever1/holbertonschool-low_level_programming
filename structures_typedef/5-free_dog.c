#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - it frees the memory
 * @d: input to be free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
	if (d-> name != NULL)
		free(d->name);
	if (d-> owner != NULL)
		free(d->owner);
}
