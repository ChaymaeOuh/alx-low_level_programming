#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: the string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = j / 2; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

