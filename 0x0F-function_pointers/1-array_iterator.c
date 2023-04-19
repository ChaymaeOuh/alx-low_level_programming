#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each element on a new one
 * @array: the array
 * @size: the size of the array
 * @action: pointer to print
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
