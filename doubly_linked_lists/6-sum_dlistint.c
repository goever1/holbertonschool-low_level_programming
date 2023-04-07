#include "lists.h"
/**
 * sum_dlistint - it adds all the values in the list
 * @head: the list
 * Return: the result when success, 0 when fail
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
