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
int i, j, p;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (j == 0)
printf("%d", p);
else if (p <= 9)
printf("  %d", p);
else if (p <= 99)
printf(" %d", p);
else
printf("%d", p);
if (j != n)
printf(", ");
}
printf("\n");
}
printf("\n");
}
}
