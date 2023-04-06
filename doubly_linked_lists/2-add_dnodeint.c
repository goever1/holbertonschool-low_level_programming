#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a list
 * @head: the list
 * @n: the new node integer
 * Return: null when fail. the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return(NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
