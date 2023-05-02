#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end in a linked list
 * @head: double pointer to the list
 * @n: data of the new node
 *
 * Return: ponter to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
list_t *new;
list_t *tmp = *head;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = new;

return (new);
}

