#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 *
 * Return: the factorial or -1 (error)
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

