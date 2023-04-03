#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
int i;
char c;
for (i = 0; i < 1000; i++)
{
c = *(str + i);
if (c != '\0')
{
_putchar('c');
}
else
{
_putchar('\n');
break;
}
}
}

