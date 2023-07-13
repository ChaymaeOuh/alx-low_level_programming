#include "hash_tables.h"

/**
 * hash_table_set - adds an elemeent to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
if (ht == NULL || key == NULL || *key == '\0')
return (0);

unsigned long int index;
index = key_index((const unsigned char *)key, ht->size);

hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);

if (new_node->key == NULL || (new_node->value == NULL && value != NULL))
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[index];

ht->array[index] = new_node;

return (1);
}
