#include "dog.h"
#include <stdio.h>
/**
 * print_dog - it prints a struct dog
 * @d: struct variable
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		printf("Age: (nill)\n");
	if (d->owner == NULL)
		d->owner = "(nill)"
	if (d == NULL)
		return;
	printf("Name: %S\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
