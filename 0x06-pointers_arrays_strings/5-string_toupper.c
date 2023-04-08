#include "main.h"

/**
 * *string_toupper - changes the lowercases letters to uppercases
 * @s: the string
 *
 * Return: the result
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}

