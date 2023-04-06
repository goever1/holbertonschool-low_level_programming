#include "lists.h"
/**
 * dlistint_len - count the number of elements in a list
 * @h: the list
 * Return: the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
