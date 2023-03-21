#include "dog.h"
#include <stdio.h>
/**
 * print_dog - it prints a struct dog
 * struct dog: struct declaration
 * @d: struct variable
 * Return; NULL when fail
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nill)\n");
		else
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
		if (d == NULL)
			return;
	}
}
