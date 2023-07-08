#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_code = hash_djb2(key);
unsigned long int index = hash_code % size;

return (index);
}

