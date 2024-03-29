#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint_t
 * @h: Pointer to head of dlistint_t;
 *
 * Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
