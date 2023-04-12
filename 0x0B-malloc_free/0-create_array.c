#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars initialized with a char
 * @size: the size of the array
 * @c: the char
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str [i] = c;
return (str);
}

