#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end in a linked list
 * @head: double pointer to the list
 * @str: new string to add in the node
 *
 * Return: the adress of the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
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

