#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: the head of the list
 * @index: the index
 *
 * Return: the node, NULL if doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;

while (tmp && i < index)
{
tmp = tmp->next;
i++;
}

return (tmp ? tmp : NULL);
}
