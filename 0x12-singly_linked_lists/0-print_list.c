#include "lists.h"
/**
 * print_list - print all elements of a linked list
 * @h: pointer
 * Return: Number of nodes of linked list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (!h->str)
			printf("[0] (nill)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
