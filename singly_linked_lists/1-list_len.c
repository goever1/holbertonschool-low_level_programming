#include "lists.h"
/**
 * list_len - counts the number of elements in a list
 * @h: linked list
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; ++i)
		h = h->next;
	return (i);
}
