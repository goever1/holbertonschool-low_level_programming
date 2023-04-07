#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: the list
 * @idx: position to insert new node
 * @n: int to insert
 * Return: a pointer to the new node, if fail NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new;

	while (h)
	{
		if (i == idx)
		{
			new = malloc(sizeof(*new));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = *h;
			new->next = *h->next;
			*h->next = new;
			(new->next)->prev = new;
			return (new);
		}
		*h = *h->next;
		i++;
	}
	return (NULL);
}
