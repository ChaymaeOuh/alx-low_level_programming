#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the first string
 * @src: the second
 * @n: number of elements
 *
 * Return: the string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j = 0;
while (dest[j] != '\0')
{
j++;
}
for (i = 0; i < n; i++)
{
dest[j + i] = src[i];
}
dest[j + n] = '\0';
return (dest);
}

