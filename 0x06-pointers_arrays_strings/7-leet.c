#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: the string
 *
 * Return: the string after encoding
 */
char *leet(char *s)
{
int i, j;
char input[] = "aAeEoOtTlL";
char output[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == input[j])
{
s[i] = output[j];
break;
}
}
}
return (s);
}

