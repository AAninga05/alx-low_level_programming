#include "lists.h"
/**
 * list_len - print number of element in a list
 * @h: pointer to head of a linked list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
