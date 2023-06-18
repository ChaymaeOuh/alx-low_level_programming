#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * @head: the head of a list
 *
 * Return: the sum , 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum = 0;

if (*head == NULL)
return (0);

while (tmp->next)
{
tmp = tmp->next;
sum += tmp->n;
}

return (sum);
}
