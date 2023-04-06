#include "lists.h"
/**
 * free_list - frees a list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *cur;

	while ((cur = head) != NULL)
	{
		head = head->next;
		free(head);
	}
}
