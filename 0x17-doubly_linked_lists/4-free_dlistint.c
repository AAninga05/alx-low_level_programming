#include "lists.h"
/**
 * free_dlistint - Free a linked-list dlistint_t
 * @head: Pointer to head of dlistint_tvlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
