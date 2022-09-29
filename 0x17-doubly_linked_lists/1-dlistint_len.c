#include "lists.h"
/**
 * dlistint_len - print number of elements in list dlistint_t
 * @h: Pointer to head of dlistint_t list.
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

