#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix of integers
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, i;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i * size + i];
}
for (i = size - 1; y >= 0; y--)
{
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}

