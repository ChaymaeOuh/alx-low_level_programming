#include <stdio.h>
/**
 * main - Prints all digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
