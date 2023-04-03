#include <stdio.h>

/**
 * swap_int - swaps the values of ywo integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

