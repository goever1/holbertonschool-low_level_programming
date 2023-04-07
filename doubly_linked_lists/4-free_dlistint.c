#include "main.h"
/**
 * free_dlistint_t - frees a list
 * @head: list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
