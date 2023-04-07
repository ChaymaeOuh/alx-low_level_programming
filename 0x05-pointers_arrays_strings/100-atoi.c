#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: the string to convert
 *
 * Return: the integer
 */
int _atoi(char *s)
{
int c = 0;
unsigned int n = 0;
int m = 1;
int p = 0;
while (s[c])
{
if (s[c]) == 45
{
m *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
p = 1;
n = (n * 10) + (s[c] - '0');
c++;
}
if (p == 1)
{
break;
}
c++;
}
n *= m;
return (n);
}

