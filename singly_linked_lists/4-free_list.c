#include "lists.h"
/**
 * free_list - frees a list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
