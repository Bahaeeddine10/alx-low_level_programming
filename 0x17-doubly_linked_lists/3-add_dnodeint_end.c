#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new = malloc(sizeof(dlistint_t));

        if (!head || !new)
                return (new ? free(new), NULL : NULL);

        new->n = n;
        new->prev = NULL;
        if (!*head)
        {
                new->prev = NULL;
		*head = new;
        }
        else
        {
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
