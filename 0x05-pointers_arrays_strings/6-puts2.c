#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
int i;
char c;
for (i = 0; i < 1000; i + 2)
{
c = *(str + i);
if (c != '\0')
{
_putchar(c);
}
else
break;
}
_putchar('\n');
}

