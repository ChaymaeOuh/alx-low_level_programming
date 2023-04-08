#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the first string
 * @src: the second string
 * @n: number of elements
 *
 * Return: the result
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

