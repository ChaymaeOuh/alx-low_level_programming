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
printf("%ld, %ld, ", a, b);
for (i = 0; i <= 47; i++)
{
c = a + b;
a = b;
b = c;
if (i == 47)
printf("%ld\n", c);
else
printf("%ld, ", c);
}
return (0);
}
