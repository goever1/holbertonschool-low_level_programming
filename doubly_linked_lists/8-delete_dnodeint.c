#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a specific node
 * @head: the list
 * @index: node to delete
 * Return: -1 if fail, 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;

	if (index == 0)
	{
		((*head)->next)->prev = NULL;
		free(*head);
	}
	for (; (*head) != NULL; ++i)
		{
			if (i == index)
			{
				((*head)->next)->prev = (*head)->prev;
				((*head)->prev)->next = (*head)->next;
				free(*head);
				return (1);
			}
			(*head) = (*head)->next;
		}
	return (-1);
}
