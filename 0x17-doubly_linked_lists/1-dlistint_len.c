#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t count = 0

        while (h)
        {
                h = h->next;
                count++;
        }
        return (count);
}
