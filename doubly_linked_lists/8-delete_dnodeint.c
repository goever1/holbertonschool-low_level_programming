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
	dlistint_t *cur, *tem;
	
	if (*head == NULL)
		return (-1);
	cur = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	while (i < index -1 && cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL || cur->next == NULL)
	return (-1);

	tem = cur->next->next;
	free(cur->next);
	cur->next = tem;
	if (tem != NULL)
		tem->prev = cur;
	return (1);
}
