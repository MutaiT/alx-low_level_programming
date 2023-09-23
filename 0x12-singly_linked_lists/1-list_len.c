#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /* Initialize a counter to keep track of elements */

	while (h != NULL)
	{
		n++;      /* Increment the counter */
		h = h->next;  /* Move to the next node */
	}

	return (n);
}
