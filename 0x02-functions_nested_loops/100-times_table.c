#include "main.h"
#include "stdio.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d", i * j);
if (j != (n - 1))
printf(", ");
}
printf("\n");
}
printf("\n");
}
}
