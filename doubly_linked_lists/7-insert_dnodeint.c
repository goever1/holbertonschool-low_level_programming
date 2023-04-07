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
	unsigned int i = 1;
	dlistint_t *new, *temp;
	
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = (*h)->next;
	while (temp)
	{
		if (i == idx)
		{
			new = malloc(sizeof(*new));
			if (new = NULL)
				return (NULL);
			new->n = n;
			(temp->prev)->next = new;
			new->prev = temp->prev;
			temp->prev = new;
			new->next = temp;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
