#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string of any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: pointer to the byte of s
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}

