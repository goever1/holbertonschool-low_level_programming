#include "lists.h"
/**
 * free_list - frees a list
 * @head: linked list
 */
void free_list(list_t *head)
{
	if (head && head->next)
		free(head->next);
	if (head && head->str)
		free(head->str);
	if (head)
		free(head);
}
