#include "list.h"

/**
 * listint_len - return the numbers of the elements in a linked lists
 * @h: linked list of the type listint_t to traverse
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
