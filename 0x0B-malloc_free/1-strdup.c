#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to the newly allocated space in memory
 * @str: the string
 *
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
char *copy;
int a = 0, i = 1;
if (str == NULL)
return (NULL);
while (str[i])
i++;
copy = (char *)malloc((sizeof(char) * i) +1);
if (copy == NULL)
return (NULL);
while (a < i)
{
copy[a] = str[a];
a++;
}
copy[a] = '\0';
return (copy);
}

