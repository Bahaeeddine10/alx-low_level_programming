#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t
 *
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return(-1);
	
	for (; idx != 0; idx--)
	{
		if (temp == NULL)
                        return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next !=NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return(1);
}
