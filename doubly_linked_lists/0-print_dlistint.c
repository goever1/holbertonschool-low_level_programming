#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: the list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
