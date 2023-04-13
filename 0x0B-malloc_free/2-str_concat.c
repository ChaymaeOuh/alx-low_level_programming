#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: first string
 * @s2: second string
 *
 * Return: concat s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
char *k;
int i, ci;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = ci = 0;
while (s1[i] != '\0')
i++;
while (s2[ci] != '\0')
ci++;
k = malloc(sizeof(char) * (i + ci + 1));
if (k == NULL)
return (NULL);
i = ci = 0;
while (s1[i] != '\0')
{
k[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
k[i] = s2[ci];
i++, ci++;
}
k[i] = '\0';
return (k);
}

