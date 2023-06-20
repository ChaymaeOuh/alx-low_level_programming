#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: the parameter
 *
 * Return: 1 if c is a letter 0 otherwise
 */
int _isalpha(int c)
{
if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
