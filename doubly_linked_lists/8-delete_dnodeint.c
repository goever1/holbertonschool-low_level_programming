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
	dlistint_t *cur = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	for (i = 0; i < index && cur != NULL; i++)
		cur = cur->next;
	if (cur == NULL)
	return (-1);
	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
