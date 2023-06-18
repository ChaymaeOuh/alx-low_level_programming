#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the head of the list
 * @n: the value of the new node
 *
 * Return: the adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp = *head;

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

if (*head == NULL)
{
*head = new;
return (new);
}

while (tmp->next)
tmp = tmp->next;

new->n = n;
new->next = NULL;
new->prev = tmp;
tmp->next = new;

return (new);
}
