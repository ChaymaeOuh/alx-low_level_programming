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
int i = 0;
int l = 0;
while (src[i++])
{
l++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}
for (i = l; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}

