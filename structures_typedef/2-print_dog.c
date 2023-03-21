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
			d->name = "(nil)";
		else
			printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nill)\n");
		else
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nill)";
		else
			printf("Owner: %s\n", d->owner);
		if (d == NULL)
			return;
	}
}
