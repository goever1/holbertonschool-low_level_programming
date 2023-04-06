#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the list
 * @n: the integer for the nre node
 * Return: when fail null, success the adres of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->prev = last;
	return (temp);
}
