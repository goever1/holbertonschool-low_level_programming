#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: lists
 * @index: node to look for
 * Return: the nood when success, null if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return(head);
		head = head->next;
		i++;
	}
	return (NULL);
}
