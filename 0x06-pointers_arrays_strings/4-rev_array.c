#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the name of the array
 * @n: number of elements
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = n - 1; i >= n / 2; i--)
{
j = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = j;
}
}

