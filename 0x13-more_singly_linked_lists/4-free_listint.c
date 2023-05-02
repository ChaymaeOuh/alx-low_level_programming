#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the list to free
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

if (head == NULL)
return (NULL);

while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}

*head = NULL;
}

