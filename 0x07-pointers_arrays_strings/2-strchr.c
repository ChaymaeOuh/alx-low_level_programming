#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer of the character or NULL if not founded
 */
char *_strchr(char *s, char c)
{
unsigned int i;
unsigned int j = 0;
char *p = NULL;
while (s[j] != '\0')
{
j++;
}
for (i = 0; i < j; i++)
{
if (s[i] == c)
{
*p = s[i];
break;
}
}
return (p);
}

