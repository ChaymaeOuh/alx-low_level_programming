#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
_putchar(*s);
_puts_recursion(s++);
}

