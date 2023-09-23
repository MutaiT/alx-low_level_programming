#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	/* Allocate memory for the new node*/
	list_t *n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	/* Duplicate the input string and assign to new_node->str */
	n_node->str = strdup(str);
	if (n_node->str == NULL) /* Check if strdup failed */
	{
		free(n_node); /* Free the allocated memory */
		return (NULL);
	}

	n_node->len = strlen(str); /* Calculate the length of the string */
	n_node->next = *head; /* Set the next pointer to the current head */

	*head = n_node; /* Update the head pointer to point to the new node */

	return (n_node); /* Return the address of the new element */
}
