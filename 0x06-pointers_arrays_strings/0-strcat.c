#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
int i;
int j = 0;
int k = 0;
while (dest[j] != '\0')
{
j++;
}
while (src[k] != '\0')
{
k++;
}
for (i = 0; i <= k; i++)
{
dest[j + i] = src[i];
}
return (dest);
}

