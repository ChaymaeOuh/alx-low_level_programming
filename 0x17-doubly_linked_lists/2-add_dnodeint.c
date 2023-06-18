#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: the head of the list
 * @n: the value of the new node
 *
 * Return: the adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
new->prev = NULL;

if (*head != NULL)
{
(*head)->prev = new;
}

*head = new;

return (new);
}
