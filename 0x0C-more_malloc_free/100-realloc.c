#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory allocated
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int i;

if (new_size  == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

ptr1 = malloc(mew_size);

if (!ptr1)
return (NULL);

old_ptr = ptr;

if (new_size < old_size)
{
for (i = 0; i < mew_size; i++)
ptr1[i] = old_ptr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = old_ptr[i];
}

free(ptr);
return (ptr1);
}

