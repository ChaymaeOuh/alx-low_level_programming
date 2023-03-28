#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
long int i, a, b, c;
a = 1;
b = 2;
printf("%d, %d, ", a, b);
for (i = 0; i <= 47; i++)
{
c = a + b;
a = b;
b = c;
if (i == 47)
printf("%d\n", c);
else
printf("%d, ", c);
}
return (0);
}
