#include "main.h"

int check_pal(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is palidrome
 * @s: the string
 *
 * Return: 1 for the palindrome string 0 otherwise
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters recursively
 * @s: the string
 * @i: integer
 * @l: length
 *
 * Return: 1 if palindrome 0 if not
 */
int check_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
return (0);
if (i >= l)
return (1);
return (check_pal(s, i + 1, l - 1));
}

