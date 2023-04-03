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
for (i = 0; i < 1000; i++)
{
if (*(str + i) != '\0')
{
_putchar(*(str + i) + '0');
}
else
{
_putchar('\n');
break;
}
}
}

