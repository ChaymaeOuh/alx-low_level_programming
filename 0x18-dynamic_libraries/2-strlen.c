#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen(char *s)
{
int i, l;
l = 0;
for (i = 0; i < 1000; i++)
{
if (*(s + i) != '\0')
{
l++;
}
else
break;
}
return (l);
}

