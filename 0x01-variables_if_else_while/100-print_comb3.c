#include <stdio.h>
/**
 * main - Print com of two numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = i; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 57 && j != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
