#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: the string
 *
 * Return: the string after encoding
 */
char *leet(char *s)
{
char *p = s;
while (*p != '\0')
{
char c = *p;
*p++ = (c == 'a' || c == 'A') ? '4' :
(c == 'e' || c == 'E') ? '3' :
(c == 'o' || c == 'O') ? '0' :
(c == 't' || c == 'T') ? '7' :
(c == 'l' || c == 'L') ? '1' :
c;
}
return (s);
}

