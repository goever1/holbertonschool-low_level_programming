#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - copy the name and the owner of a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL when fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *cp_name, *cp_owner;
	int owner_len = 0, name_len = 0, i = 0;

	if ( name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	new_name = malloc(sizeof(dogt));
	if (new_name == NULL)
		return (NULL);

	for (; name[name_len] != '\0'; ++name_len)
		;
	for (; owner[owner_len] != '\0'; ++owner_len)
		;

	cp_name = malloc (sizeof(char) * (name_len + 1));
	if (cp_name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	cp_owner = malloc (sizeof(char) * (owner_len + 1));
	if (cp_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (i = 0; i <= name_len; ++i)
		cp_name[i] = name[i];
	for (i = 0; i <= owner_len; ++i)
		cp_owner[i] = owner[i];
	new_name->name = cp_name;
	new_name->owner = cp_owner;
	new_name->age = age;
	return (new_name);
}
