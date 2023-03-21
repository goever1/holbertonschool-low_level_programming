#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - it initializes a struct dog type variable
 * @d: struct dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
