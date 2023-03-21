#include "dog.h"
#include <stdio.h>
/**
 * print_dog - it prints a struct dog
 * @d: struct variable
 * Return; NULL when fail
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
		if (d == NULL)
			return;
	}
}
