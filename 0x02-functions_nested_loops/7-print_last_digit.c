#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
if (n >= 0)
n = n % 10;
else
n = (n * -1) % 10;
_putchar('0' + n);
return (n);
}
