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
	
	if (h == NULL)
		return (NULL);
	while (*h)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			if (idx == 0)
				return (add_dnodeint(h, n));
			else
			{
				new->prev = (*h);
				new->next = (*h)->next;
				if ((*h)->next)
					(*h)->next->prev = new;
				(*h)->next = new;
				return (new);
			}
		}
		*h = (*h)->next;
		i++;
	}
	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
