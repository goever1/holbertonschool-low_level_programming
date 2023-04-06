#include "lists.h"
/**
 * add_note - adds a new node at the beginning
 * @head: linked list
 * @str: string to add
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (; str[i]; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
